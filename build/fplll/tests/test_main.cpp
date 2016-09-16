/* Copyright (C) 2015 Martin Albrecht
*               2016 Michael Walter

This file is part of fplll. fplll is free software: you
can redistribute it and/or modify it under the terms of the GNU Lesser
General Public License as published by the Free Software Foundation,
either version 2.1 of the License, or (at your option) any later version.

fplll is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with fplll. If not, see <http://www.gnu.org/licenses/>. */

#include "..\..\..\tests\test_bkz.h"
#include "..\..\..\tests\test_lll.h"
#include "..\..\..\tests\test_nr.h"
#include "..\..\..\tests\test_pruner.h"
#include "..\..\..\tests\test_sieve.h"
#include "..\..\..\tests\test_svp.h"

int main(int argc, char * argv[])
{
  int status = 0;

  status |= test_bkz_tests::main(argc, argv);
  status |= test_lll_tests::main(argc, argv);
  status |= test_nr_tests::main(argc, argv);
  status |= test_pruner_tests::main(argc, argv);
  status |= test_sieve_tests::main(argc, argv);
  status |= test_svp_tests::main(argc, argv);

  return status;
}
