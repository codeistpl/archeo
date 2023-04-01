#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <version.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Archeo : v" + archeo::getVersion());
}

MainWindow::~MainWindow()
{
    delete ui;
}

