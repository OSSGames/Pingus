//  $Id: fake_exit_obj.hxx,v 1.2 2002/09/08 18:13:04 grumbel Exp $
//
//  Pingus - A free Lemmings clone
//  Copyright (C) 1999 Ingo Ruhnke <grumbel@gmx.de>
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 2
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

#ifndef HEADER_PINGUS_EDITOROBJS_FAKE_EXIT_OBJ_HXX
#define HEADER_PINGUS_EDITOROBJS_FAKE_EXIT_OBJ_HXX

#include "../editor/sprite_editorobj.hxx"
#include "../worldobj_data.hxx"

namespace WorldObjsData {
  class FakeExitData;
}

namespace EditorObjs {

  class FakeExitObj : public SpriteEditorObj
  {
    private:
      int frame;
      WorldObjsData::FakeExitData* const data;
    
    public:
      FakeExitObj (WorldObjsData::FakeExitData* data_);
     ~FakeExitObj ();
     
    static EditorObjLst create (const CL_Vector& pos);

      EditorObj* duplicate ();
      
      void write_xml (std::ostream& xml);
      void draw (EditorView* view);
      
      std::string status_line ();
    
    private:
      FakeExitObj (const FakeExitObj&);
      FakeExitObj operator= (const FakeExitObj&);
  };

}

#endif

/* EOF */
