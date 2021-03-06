/* License
* --------------------------------------------------------------------------------------------------------------------
* This file is part of the VM.
*
* Copyright (c) 2017 Andreas Trütschel.
* Copyright (c) 2017 Benjamin Stone.
*
* AI4E is free software: you can redistribute it and/or modify
* it under the terms of the GNU Lesser General Public License as
* published by the Free Software Foundation, version 3.
*
* AI4E is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
* Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public License
* along with this program. If not, see <http://www.gnu.org/licenses/>.
* --------------------------------------------------------------------------------------------------------------------
*/



#include "vm.hpp"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VM w;
    w.show();
    return a.exec();
}
