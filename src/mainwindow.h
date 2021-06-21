#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include <iostream>
#include <sstream>

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void print_text();
    void chose_encryption();
    QString in_en;
    QString out_en;

private slots:
    void button_left();
    void button_right();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
