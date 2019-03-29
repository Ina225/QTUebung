#include <QtGui/QLabel>
#include <QDialog>
#include <QKeyEvent>
#include <QApplication>

#include "spiel.h"
#include "spiel.cpp"

int main(int argc, char * argv[]){
QApplication app (argc, argv);
spiel *s = new spiel();
s->resize(600,400);
s->show();
return app.exec();
}

  

