//
// Created by Florian on 30.03.2019.
//
#include <QLabel>
#include <QPixmap>
#include <QDialog>
#include <QWidget.h>

#ifndef TESTQT_SPIEL_H
#define TESTQT_SPIEL_H
class schiff : public QLabel {
private:
    int xpos;
    int ypos;
    int richtung;
public:
    void setx(int);
    void sety(int);
    void bewege(int);
    schiff(QWidget * w = 0);
};

class spiel : public QDialog{
    private:
        int richtung;
        int myTimerId;
        schiff * s;
    public:
        spiel (QWidget * w = 0);
        void  keyPressEvent(QKeyEvent *event);
        void  showEvent(QShowEvent * event);
        void  timerEvent(QTimerEvent * event);
        void  hideEvent(QHideEvent * event );
};


#endif //TESTQT_SPIEL_H
