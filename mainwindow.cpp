/* Copyright 2023 Michal Sopniewski <codeist@codeist.pl>

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

    Additionally, if you find this program useful and we ever meet in
    person, you are encouraged to buy the author a beer.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <version.h>
#include <iostream>

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

void MainWindow::about()
{
    About dialog(this);
    dialog.exec();
    std::cout << "dialog" << std::endl;
}

