#ifndef ADDAUDIOBOOK_H
#define ADDAUDIOBOOK_H
#include "asortiment.h"
#include <QDialog>

namespace Ui {
class addAudiobook;
}

class addAudiobook : public QDialog
{
    Q_OBJECT

public:
    explicit addAudiobook(QWidget *parent = nullptr);
    ~addAudiobook();

private:
    Ui::addAudiobook *ui;

    asortiment *Asortiment;

signals:
    void signal9(QString);
    void signal10(QString);
    void signal11(QString);
    void signal12(QString);
    void signal13(QString);
    void signal14(QString);
    void signal15(QString);
    void signal16(QString);

private slots:
    void on_save_clicked();
};

#endif // ADDAUDIOBOOK_H
