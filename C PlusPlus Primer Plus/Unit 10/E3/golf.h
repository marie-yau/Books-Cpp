class golf {
public:
    golf();
    golf(const char *name, int hc);
    void setgolf();
    void handicap(int hc);
    void showgolf();
    struct GOLF{
        char fullname[40];
        int handicap;
    };
private:
    GOLF g;
};

