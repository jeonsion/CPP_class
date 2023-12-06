#include <vector>
#include <iomanip>
using namespace std;

class ingredient {
protected:
    int remain = 3;
public:
    virtual void show() {
        for (int i = 0; i < remain; i++)
            cout << '*';
        cout << endl;
    }
    void fill() { remain = 3; }
    void consume() { remain--; }
    bool isConsume() {
        if (remain < 1)
            return false;
        else
            return true;
    }
};

class Coffee : public ingredient {
public:
    virtual void show() override {
        cout << setw(8) << left << "Coffee";
        ingredient::show();
    }
};
class Sugar : public ingredient {
public:
    virtual void show() {
        cout << setw(8) << left << "Sugar";
        ingredient::show();
    }
};
class Cream : public ingredient {
public:
    virtual void show() {
        cout << setw(8) << left << "Cream";
        ingredient::show();
    }
};
class Water : public ingredient {
public:
    virtual void show() {
        cout << setw(8) << left << "Water";
        ingredient::show();
    }
};
class Cup : public ingredient {
public:
    virtual void show() {
        cout << setw(8) << "Cup";
        ingredient::show();
    }
};

class CoffeeMachine {
    vector<ingredient*> ingredientVt;
    int getMenu() {
        int selectMenu;
        cout << "보통 커피:0, 설탕 커피:1, 블랙 커피:2, 채우기:3, 종료:4 >> ";
        cin >> selectMenu;
        return selectMenu;
    }
    void fillAll() {
        cout << "모든 통을 채웁니다~~";
        for (auto& a : ingredientVt)
            a->fill();
        cout << endl;
    }
    void showAll() {
        for (auto& a : ingredientVt)
            a->show();
        cout << endl;
    }
    bool isGetCoffee(int coffee) {
        if (!ingredientVt[0]->isConsume() || !ingredientVt[3]->isConsume() || !ingredientVt[4]->isConsume())
            return false;
        switch (coffee) {
        case 0:
            if (!ingredientVt[2]->isConsume())
                return false;
            else
                ingredientVt[2]->consume();
        case 1:
            if (!ingredientVt[1]->isConsume())
                return false;
            else
                ingredientVt[1]->consume();
            break;
        }
        ingredientVt[0]->consume();
        ingredientVt[3]->consume();
        ingredientVt[4]->consume();
        return true;
    }
    void getCoffee(int coffee, bool flag) {
        if (!flag)
            cout << "재료가 부족합니다." << endl;
        else {
            switch (coffee) {
            case 0:
                cout << "맛있는 보통 커피 나왔습니다~~" << endl;
                break;
            case 1:
                cout << "맛있는 설탕 커피 나왔습니다~~" << endl;
                break;
            case 2:
                cout << "맛있는 블랙 커피 나왔습니다~~" << endl;
                break;

            }
        }
    }
public:
    CoffeeMachine() {
        ingredientVt.push_back(new Coffee());
        ingredientVt.push_back(new Sugar());
        ingredientVt.push_back(new Cream());
        ingredientVt.push_back(new Water());
        ingredientVt.push_back(new Cup());
    }
    void run() {
        cout << "----- 명품 커피 자판기입니다. -----" << endl;
        showAll();
        int coffee;
        bool flag;
        while (true) {
            switch (coffee = getMenu()) {
            case 0: case 1: case 2:
                flag = isGetCoffee(coffee);
                getCoffee(coffee, flag);
                break;
            case 3:
                fillAll();
                break;
            case 4:
                return;
            }
            showAll();
        }
    }
};

int main() {
    CoffeeMachine CM;
    CM.run();
}
