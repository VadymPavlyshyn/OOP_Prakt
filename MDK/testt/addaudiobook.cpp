#include "addaudiobook.h"
#include "ui_addaudiobook.h"
#include <QMessageBox>
addAudiobook::addAudiobook(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addAudiobook)
{
    ui->setupUi(this);
    Asortiment = new asortiment;
    connect(this, &addAudiobook::signal9 ,Asortiment, &asortiment::slot9 );
    connect(this, &addAudiobook::signal10 ,Asortiment, &asortiment::slot10 );
    connect(this, &addAudiobook::signal11 ,Asortiment, &asortiment::slot11 );
    connect(this, &addAudiobook::signal12 ,Asortiment, &asortiment::slot12 );
    connect(this, &addAudiobook::signal13 ,Asortiment, &asortiment::slot13 );
    connect(this, &addAudiobook::signal14 ,Asortiment, &asortiment::slot14 );
    connect(this, &addAudiobook::signal15 ,Asortiment, &asortiment::slot15 );
    connect(this, &addAudiobook::signal16 ,Asortiment, &asortiment::slot16 );
}

addAudiobook::~addAudiobook()
{
    delete ui;
}

void addAudiobook::on_save_clicked()
{
    if(ui->btext9->text().isEmpty() || ui->btext10->text().isEmpty() ||ui->btext11->text().isEmpty() ||
        ui->btext12->text().isEmpty() ||ui->btext13->text().isEmpty() ||ui->btext14->text().isEmpty() ||
        ui->btext15->text().isEmpty() || ui->btext16->text().isEmpty() )
    {
        QMessageBox::warning(this, "Помилка", "Будьласка введіть усі значення.");

    }
    else{

        Asortiment->setModal(true);
        Asortiment->show();

        emit signal9(ui->btext9->text());
        emit signal10(ui->btext10->text());
        emit signal11(ui->btext11->text());
        emit signal12(ui->btext12->text());
        emit signal13(ui->btext13->text());
        emit signal14(ui->btext14->text());
        emit signal15(ui->btext15->text());
        emit signal16(ui->btext16->text());


    }
}

