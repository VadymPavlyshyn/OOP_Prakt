#include "asortiment.h"
#include "ui_asortiment.h"

asortiment::asortiment(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::asortiment)
{
    ui->setupUi(this);
}

asortiment::~asortiment()
{
    delete ui;
}

void asortiment::slot(QString a){
        ui->label->setText(a);
};
void asortiment::slot2(QString b){
    ui->label2->setText(b);
};
void asortiment::slot3(QString c){
    ui->label3->setText(c);
};
void asortiment::slot4(QString d){
    ui->label4->setText(d);
};
void asortiment::slot5(QString e){
    ui->label5->setText(e);
};
void asortiment::slot6(QString f){
    ui->label6->setText(f);
};
void asortiment::slot7(QString g){
    ui->label7->setText(g);
};
void asortiment::slot8(QString h){
    ui->label8->setText(h);
};



