#ifndef ADDAUDIOBOOK_H
#define ADDAUDIOBOOK_H

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
};

#endif // ADDAUDIOBOOK_H
