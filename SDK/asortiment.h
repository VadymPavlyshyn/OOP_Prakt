#ifndef ASORTIMENT_H
#define ASORTIMENT_H

#include <QDialog>

namespace Ui {
class asortiment;
}

class asortiment : public QDialog
{
    Q_OBJECT

public:
    explicit asortiment(QWidget *parent = nullptr);
    ~asortiment();



private:
    Ui::asortiment *ui;

public slots:
    void slot(QString a);
void slot2(QString b);
void slot3(QString c);
void slot4(QString d);
void slot5(QString e);
void slot6(QString f);
void slot7(QString g);
void slot8(QString h);

};



#endif // ASORTIMENT_H
