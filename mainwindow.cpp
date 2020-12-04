#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <iostream>
#include <sstream>

std::pair<bool, bool> MainWindow::action; //forward declarations
std::stringstream MainWindow::str_in;
std::stringstream MainWindow::str_out;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton,&QPushButton::clicked,button_right);
    QObject::connect(ui->pushButton_3,&QPushButton::clicked,button_left);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::button_right()
{
    action.first = true;
    action.second = false;
    handle_button();
}
void MainWindow::button_left()
{
    action.first = false;
    action.second = true;
    handle_button();
}

void MainWindow::handle_button()
{
    if(action.first)
    {
        get_text();
    }
    else
    {
    }
}

void MainWindow::get_text()
{
    std::cout << "Test" << "\n";
}
