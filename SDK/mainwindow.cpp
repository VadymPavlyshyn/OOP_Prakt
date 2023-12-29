#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include "addbook.h"
#include "addAudiobook.h"
#include "asortiment.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    addbook winbook;
    winbook.setModal(true);
    winbook.exec();
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton repty =  QMessageBox::question(this, "Вихід",  "Ви впевненні що хочете вийти?",
                                                    QMessageBox::Yes | QMessageBox::No);


    if(repty == QMessageBox::Yes){
        QApplication::quit();

    }
    else{
        qDebug() << "ні";
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    addAudiobook winaudiobook;
    winaudiobook.setModal(true);
    winaudiobook.exec();
}


void MainWindow::on_pushButton_4_clicked()
{
    asortiment winasortiment;
    winasortiment.setModal(true);
    winasortiment.exec();
}

