//===----------------------------------------------------------------------===//
//
//                         DuckDB
//
// common/types/constant_vector.hpp
//
// Author: Mark Raasveldt
//
//===----------------------------------------------------------------------===//

#pragma once

#include "common/types/vector.hpp"

#include <type_traits>

namespace duckdb {

//! The ConstantVector is a vector that references a single constant value
class ConstantVector : public Vector {
  public:
	ConstantVector(Value value_) : value(value_) {
		Reference(value_);
	}

  private:
	Value value;
};

} // namespace duckdb