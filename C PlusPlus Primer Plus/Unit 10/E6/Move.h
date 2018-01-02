#ifndef MOVE_H
#define MOVE_H

class Move {
public:
    Move(double a = 0, double b = 0);
    void showmove() const;
    Move add(const Move & m) const;
    void resets(double a = 0, double b = 0);
private: 
    double x;
    double y;
};

#endif /* MOVE_H */

