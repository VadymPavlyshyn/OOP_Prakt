#include "addaudiobook.h"
#include "ui_addaudiobook.h"

addAudiobook::addAudiobook(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addAudiobook)
{
    ui->setupUi(this);
}

addAudiobook::~addAudiobook()
{
    delete ui;
}
