#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <iostream>
#include <sstream>
#include "Engine/handle_text.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton, SIGNAL(clicked()), SLOT(button_left()));
    QObject::connect(ui->pushButton_3, SIGNAL(clicked()), SLOT(button_right()));

    std::vector<QString> _options = {"Normal text", "Caesar cipher", "Binary", "Hex", "ROT13"};

    for (auto &i : _options)
    {
        ui->comboBox->addItem(i);
        ui->comboBox_3->addItem(i);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::button_left()
{
    in_en = ui->textEdit->toPlainText();
    ui->textEdit_3->clear();
    out_en = Funct::handle(in_en, ui->comboBox->currentText(), ui->comboBox_3->currentText());
    ui->textEdit_3->append(out_en);
}

void MainWindow::button_right()
{
    in_en = ui->textEdit_3->toPlainText();
    ui->textEdit->clear();
    out_en = Funct::handle(in_en, ui->comboBox_3->currentText(), ui->comboBox->currentText());
    ui->textEdit->append(out_en);
}
