#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <iostream>
#include <sstream>
#include "Engine/handle_text.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton,SIGNAL(clicked()),SLOT(button_left()));
    QObject::connect(ui->pushButton_3,SIGNAL(clicked()),SLOT(button_right()));
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::button_left()
{
    in_en = ui->textEdit->toPlainText();
    ui->textEdit_3->clear();
    out_en = Funct::handle(in_en, true, Caesar);
    ui->textEdit_3->append(out_en);
}
void MainWindow::button_right()
{
    in_en = ui->textEdit_3->toPlainText();
    ui->textEdit->clear();
    out_en = Funct::handle(in_en, true, Caesar);
    ui->textEdit->append(out_en);
}

