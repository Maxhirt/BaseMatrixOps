/*################################################################################
  ##
  ##   Copyright (C) 2016-2023 Keith O'Hara
  ##
  ##   This file is part of the BaseMatrixOps C++ library.
  ##
  ##   Licensed under the Apache License, Version 2.0 (the "License");
  ##   you may not use this file except in compliance with the License.
  ##   You may obtain a copy of the License at
  ##
  ##       http://www.apache.org/licenses/LICENSE-2.0
  ##
  ##   Unless required by applicable law or agreed to in writing, software
  ##   distributed under the License is distributed on an "AS IS" BASIS,
  ##   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  ##   See the License for the specific language governing permissions and
  ##   limitations under the License.
  ##
  ################################################################################*/

#ifndef BMO_MATOPS_SUM

//

#ifdef BMO_ENABLE_ARMA_WRAPPERS
#define BMO_MATOPS_SUM(x) arma::sum(x)
#define BMO_MATOPS_ROWWISE_SUM(x)                                              \
  arma::sum(x, 1) // for each row, sum the elements
#define BMO_MATOPS_COLWISE_SUM(x)                                              \
  arma::sum(x, 0) // for each column, sum the elements
#endif

#ifdef BMO_ENABLE_EIGEN_WRAPPERS
#define BMO_MATOPS_SUM(x) (x).sum()
#define BMO_MATOPS_ROWWISE_SUM(x)                                              \
  (x).rowwise().sum() // for each row, sum the elements
#define BMO_MATOPS_COLWISE_SUM(x)                                              \
  (x).colwise().sum() // for each column, sum the elements
#endif

//

#endif
