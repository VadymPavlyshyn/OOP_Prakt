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
void asortiment::slot9(QString i){
    ui->label9->setText(i);
};
void asortiment::slot10(QString j){
    ui->label10->setText(j);
};
void asortiment::slot11(QString k){
    ui->label11->setText(k);
};
void asortiment::slot12(QString l){
    ui->label12->setText(l);
};
void asortiment::slot13(QString m){
    ui->label13->setText(m);
};
void asortiment::slot14(QString n){
    ui->label14->setText(n);
};
void asortiment::slot15(QString o){
    ui->label15->setText(o);
};
void asortiment::slot16(QString p){
    ui->label16->setText(p);
};



