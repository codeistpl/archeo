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

#pragma once

#include <QString>
#include <QStringLiteral>

namespace archeo {

struct  Version{
    QString getVersion()const{
        return QStringLiteral("%1.%2.%3").arg(this->major).arg(this->minor).arg(this->patch);
    }

    unsigned short int major=0, minor=0, patch=0;
};

// modify version here
constexpr static Version version = {0,0,1};

static const QString getVersion() {
    return version.getVersion();
}

}
