/**
 * Copyright 2019 Adobe. All rights reserved.
 * This file is licensed to you under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License. You may obtain a copy
 * of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software distributed under
 * the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR REPRESENTATIONS
 * OF ANY KIND, either express or implied. See the License for the specific language
 * governing permissions and limitations under the License.
 */

#include "zdw/BufferedOutput.h"


namespace adobe {
namespace zdw {

int compareByIndex(const void* first, const void* second)
{
	return (reinterpret_cast<const OutputOrderIndexer *>(first))->index
			- (reinterpret_cast<const OutputOrderIndexer *>(second))->index;
}

int compareByOutputIndex(const void* first, const void* second)
{
	return (reinterpret_cast<const OutputOrderIndexer *>(first))->outputIndex
			- (reinterpret_cast<const OutputOrderIndexer *>(second))->outputIndex;
}

} // namespace zdw
} // namespace adobe

