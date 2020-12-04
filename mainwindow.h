#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include <iostream>
#include <sstream>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    static void get_text();
    static void print_text();
    static void chose_encryption();
    static void handle_button();
    static void button_left();
    static void button_right();
    static std::pair<bool, bool> action; //which side
    static std::stringstream str_in;
    static std::stringstream str_out;

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
