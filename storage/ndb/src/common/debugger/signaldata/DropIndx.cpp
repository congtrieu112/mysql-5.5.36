/* Copyright (c) 2003, 2005 MySQL AB

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA */

#include <signaldata/DropIndx.hpp>

bool printDROP_INDX_REQ(FILE * output, const Uint32 * theData, Uint32 len, Uint16 receiverBlockNo)
{
//  const DropIndxReq * const sig = (DropIndxReq *) theData;
  
  return false;
}

bool printDROP_INDX_CONF(FILE * output, const Uint32 * theData, Uint32 len, Uint16 receiverBlockNo)
{
//  const DropIndxConf * const sig = (DropIndxConf *) theData;
  
  return false;
}

bool printDROP_INDX_REF(FILE * output, const Uint32 * theData, Uint32 len, Uint16 receiverBlockNo)
{
//  const DropIndxRef * const sig = (DropIndxRef *) theData;

  return false;
}
