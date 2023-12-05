    friend class Maze;
    bool isValid()  { return bValid;   }
    bool isStart()  { return bStart;   }
    bool isDest()   { return bDest;    }
    void setValid(bool val) { bValid = val; }
    void setStart(bool val) { bStart = val; }
    void SetDest(bool val)  { bDest = val;  }  
    void setX(int val)  { x = val;  }
    void setY(int val)  { y = val;  } 
    int getx() { return x; }
    int gety()  { return y;  }