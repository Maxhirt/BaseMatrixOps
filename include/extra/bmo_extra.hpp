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

#ifndef BMO_EXTRA_INCLUDES
#define BMO_EXTRA_INCLUDES

//

namespace bmo {

#include "get_sort_index.hpp"
#include "index_min.hpp"
#include "reset_negative_values.hpp"
#include "unit_vec.hpp"

#ifdef BMO_ENABLE_EXTRA_EXPERIMENTAL
#include "cube_type.hpp"
#include "tesseract_type.hpp"
#endif

} // namespace bmo

#endif
