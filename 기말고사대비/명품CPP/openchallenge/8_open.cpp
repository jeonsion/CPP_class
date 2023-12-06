//chhead.cpp part
#include "chhead.h"
#include <iostream>
#include <string>


int Product::getID(){return ProductID;}
string Product::getdes(){return  description;}
int Product::getprice(){return price;}
string Product::getPd(){return producer;}


string Book:: getTitle(){return Booktitle;}
string Book::getAuth(){return AuthorName;}
string Book:: getISBN(){return ISBNNUM;}
void Book::show(){
        cout << "---상품 ID: " << this->getID() << endl;
        cout << "상품설명: " << this->getdes() <<endl;
        cout << "생산자 : " << this->getPd() <<endl;
        cout << "가격 : " << this->getprice() <<endl;
        cout << "책제목 : " << this->getTitle() <<endl;
        cout << "작가 : " << this->getAuth() << endl;
        cout << "ISBN : " << this->getISBN() << endl;
      
}




string  CompactDisc::getSinger(){return SingerName;}
string  CompactDisc::getAlbumT(){return Albumtitle;}
void CompactDisc::show(){
        cout << "---상품 ID: " << this->getID() << endl;
        cout << "상품설명 : " << this->getdes() <<endl;
        cout << "생산자 : " << this->getPd() <<endl;
        cout << "가격 : " << this->getprice() <<endl;
        cout << "앨범제목 : " << this->getAlbumT() <<endl;
        cout << "가수 : " << this->getSinger() <<endl;
}


string ConversationBook:: getlang(){return  language;}
    
void ConversationBook::show(){
        cout << "---상품 ID: " << this->getID() << endl;
        cout << "상품설명: " << this->getdes() <<endl;
        cout << "생산자 : " << this->getPd() <<endl;
        cout << "가격 : " << this->getprice() <<endl;
        cout << "책제목 : " << this->getTitle() <<endl;
        cout << "작가 : " << this->getAuth() << endl;
        cout << "ISBN : " << this->getISBN() << endl;
        cout << "언어 : "  << this->getlang() << endl;
}

//chhead.h part
#ifndef CHHEADER_H
#define CHHEADER_H
#include <iostream>
using namespace std;

class Product { //최상위 클래스
    
    int ProductID;
    int price;
    string description;
    string producer;
    
    
public:
    Product(int ProductID, string description,int price,string producer){
        this->ProductID = ProductID;
        this->description = description;
        this->price =price;
        this->producer = producer;
    }
    int getID();
    string getdes();
    int getprice();
    string getPd();
    
    virtual void show()=0;

};



class Book :  public Product{
    string ISBNNUM;
    string AuthorName;
    string Booktitle;
public:
    Book(int ProductID,string description,int price,string producer,string title,string author,string ISBN):Product(ProductID,description, price,producer){
        this->Booktitle = title;
        this->AuthorName = author;
        this->ISBNNUM = ISBN;
    }
    
    string getTitle();
    string getAuth();
    string getISBN();
    
    void show();
 
      

 

};



class CompactDisc :  public Product{
    string Albumtitle;
    string SingerName;
public:
    CompactDisc(int ProductID,string description,int price,string producer,string title,string singer):Product(ProductID,description, price,producer){
        this->SingerName = singer;
        this->Albumtitle = title;
    }
    string getSinger();
    string getAlbumT();
    void show();
 

};

class ConversationBook :  public Book{
    string language;
public:
    ConversationBook(int ProductID,string description,int price,string producer,string title,string author,string lang,string ISBN) : Book(ProductID,description,price,producer,title,author,ISBN){
        this-> language = lang;
    }
    string getlang();
    
    void show();

};




#endif


//main part

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
#include "chhead.h"

int productid=0;
int main() {
    int choice,price;
    Product *p[100];
    string title,name,author,producer,description,singer ,lang,ISBN;
        
    
    cout << "*********** 상품 관리 프로그램을 작동합니다 **********" <<endl;
    while (1) {
        cout << "상품추가(1) , 모든상품 조회(2) , 끝내기(3) ?? " ;
        cin >> choice;
        if( choice == 1){
            cout << "상품종류 책(1) , 음악cd(2) , 회화책(3) ?";
            cin >> choice;
            
            if( choice == 1){ //책일때
                cin.ignore();
                cout << "상품설명>>";
                getline(cin,description);
                cout << "책제목>>";
                getline(cin,title);
                cout << "가격>";
                cin >> price;
                cin.ignore(); //정수입력다음에 ignore로 없애주기
                cout << "생산자>>";
                getline(cin,producer);
                cout << "저자>>";
                getline(cin,author);
                cout << "ISBN>>";
                getline(cin,ISBN);
                Book *b = new Book(productid,description,price,producer,title,author,ISBN);
                p[productid++] = b;
            }
            else if( choice == 2){ //음악 앨범일때
                cin.ignore();
                cout << "상품설명>>";
                getline(cin,description);
                cout << "앨범 제목>>";
                getline(cin,title);
                cout << "가격>";
                cin >> price;
                cin.ignore();
                cout << "생산자>>";
                getline(cin,producer);
                cout << "가수>>";
                getline(cin,singer);
                CompactDisc *a = new CompactDisc(productid,description,price,producer,title,singer);
                p[productid++] = a;
            }
            else if( choice == 3){ //회화책일때
                cin.ignore();
                cout << "상품설명>>";
                getline(cin,description);
                cout << "생산자>>";
                getline(cin,producer);
                cout << "책제목>>";
                getline(cin,title);
                cout << "가격>";
                
                cin >> price;
                cin.ignore();
                cout << "저자>>";
                getline(cin,author);
                cout << "언어>>";
                getline(cin,lang);
                cout << "ISBN>>";
                getline(cin,ISBN);
                
                ConversationBook *k = new ConversationBook(productid,description,price,producer,title,author,lang,ISBN);
                p[productid++]=k;
                
            }
            
        }
        else if( choice == 2){ //모든상품들을 조회
            for(int t=0 ; t<productid ; t++){
                p[t]->show();//머지?? 질문해야지
                
            }
            
            
        }
        else if( choice == 3){
            return 0;
        }
    }
    return 0;
}