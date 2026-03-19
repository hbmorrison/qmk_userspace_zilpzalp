// Copyright 2026 Hannah Blythe Morrison
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

// Choose the keymap that puts the modifier layers onto the thumb keys, and let
// the handed mods affect keys on the same side, rather than applying to the
// opposite side.

#define CORE_KEYMAP_THUMB_MODS
#define HANDED_MODS_SAME_SIDE

// Make the zilpzalp base layer use middle/bottom keys on the inside rather than
// top/middle keys.

#define CORE_KEYMAP_ZILPZALP_ALT_BASE
