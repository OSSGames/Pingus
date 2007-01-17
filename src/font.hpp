/*  $Id$
**   __      __ __             ___        __   __ __   __
**  /  \    /  \__| ____    __| _/_______/  |_|__|  | |  |   ____
**  \   \/\/   /  |/    \  / __ |/  ___/\   __\  |  | |  | _/ __ \
**   \        /|  |   |  \/ /_/ |\___ \  |  | |  |  |_|  |_\  ___/
**    \__/\  / |__|___|  /\____ /____  > |__| |__|____/____/\___  >
**         \/          \/      \/    \/                         \/
**  Copyright (C) 2005 Ingo Ruhnke <grumbel@gmx.de>
**
**  This program is free software; you can redistribute it and/or
**  modify it under the terms of the GNU General Public License
**  as published by the Free Software Foundation; either version 2
**  of the License, or (at your option) any later version.
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
** 
**  You should have received a copy of the GNU General Public License
**  along with this program; if not, write to the Free Software
**  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
**  02111-1307, USA.
*/

#ifndef HEADER_FONT_HPP
#define HEADER_FONT_HPP

#include <string>
#include "SDL.h"
#include "math/origin.hpp"
#include "math/rect.hpp"
#include "math/size.hpp"

/** */
class Font
{
private:
public:
  Font() {}
  void draw(int, int, const std::string& text, SDL_Surface* target = 0) {}
  void set_alignment(Origin origin) {}
  int get_height() { return 0; }
  int get_width(char) { return 0; }
  Size get_size(const std::string& str) { return Size(0,0);} 
  Rect bounding_rect(int , int, const std::string& str) const;
};

#endif

/* EOF */