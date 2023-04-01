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
#include "about.h"
#include "ui_about.h"

#include <QStringLiteral>
#include <version.h>
#include <licence.h>

About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
    ui->nameLabel->setText("\bArcheo\b");
    ui->versionLabel->setText("v"+archeo::getVersion());
    ui->buildLabel->setText("build: devel");
    ui->copyrigthText->setText(archeo::license);
}

About::~About()
{
    delete ui;
}
