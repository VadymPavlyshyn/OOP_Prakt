#include "addbook.h"
#include "ui_addbook.h"
#include <QMessageBox>
addbook::addbook(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addbook)
{
    ui->setupUi(this);
    Asortiment = new asortiment;
    Asortiment->show();
    connect(this, &addbook::signal ,Asortiment, &asortiment::slot );
     connect(this, &addbook::signal2 ,Asortiment, &asortiment::slot2 );
      connect(this, &addbook::signal3 ,Asortiment, &asortiment::slot3 );
       connect(this, &addbook::signal4 ,Asortiment, &asortiment::slot4 );
        connect(this, &addbook::signal5 ,Asortiment, &asortiment::slot5 );
         connect(this, &addbook::signal6 ,Asortiment, &asortiment::slot6 );
          connect(this, &addbook::signal7 ,Asortiment, &asortiment::slot7 );
          connect(this, &addbook::signal8 ,Asortiment, &asortiment::slot8 );

}

addbook::~addbook()
{
    delete ui;
};

void addbook::on_bpush_clicked()
{
    if(ui->btext->text().isEmpty() || ui->btext2->text().isEmpty() ||ui->btext3->text().isEmpty() ||
        ui->btext4->text().isEmpty() ||ui->btext5->text().isEmpty() ||ui->btext6->text().isEmpty() ||
        ui->btext7->text().isEmpty() )
    {
     QMessageBox::warning(this, "Помилка", "Будьласка введіть усі значення.");

    }
    else{
        emit signal(ui->btext->text());
        emit signal2(ui->btext2->text());
        emit signal3(ui->btext3->text());
        emit signal4(ui->btext4->text());
        emit signal5(ui->btext5->text());
        emit signal6(ui->btext6->text());
        emit signal7(ui->btext7->text());

        if(ui->checkBox->isChecked()){

            emit signal8("З твердою обкладинкою");
        }
        else
        {emit signal8("З м'якою обкладинкою");}
    }







}


