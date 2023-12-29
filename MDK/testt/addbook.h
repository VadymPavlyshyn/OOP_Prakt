#ifndef ADDBOOK_H
#define ADDBOOK_H
#include "asortiment.h"
#include <QDialog>

namespace Ui {
class addbook;
}

class addbook : public QDialog
{
    Q_OBJECT

public:
    explicit addbook(QWidget *parent = nullptr);
    ~addbook();


private:
    Ui::addbook *ui;

    asortiment *Asortiment;

signals:
    void signal(QString);
    void signal2(QString);
    void signal3(QString);
    void signal4(QString);
    void signal5(QString);
    void signal6(QString);
    void signal7(QString);
    void signal8(QString);

private slots:
    void on_bpush_clicked();

};

#endif // ADDBOOK_H


