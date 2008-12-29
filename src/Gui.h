#ifndef _GUI_H
#define _GUI_H

#include "libs.h"

namespace Gui {

	namespace Theme {
		void DrawIndent(const float size[2]);
		void DrawOutdent(const float size[2]);
		void DrawHollowRect(const float size[2]);
	}

	namespace Color {
		extern const float bg[];
		extern const float bgShadow[];
	}

	void HandleSDLEvent(SDL_Event *event);
	void Draw();
	void AddTimer(Uint32 ms, sigc::signal<void> *s);
	void RemoveTimer(sigc::signal<void> *s);
	void Init(int screen_width, int screen_height, int ui_width, int ui_height);
}

#include "GuiEvents.h"

namespace Gui {
	namespace RawEvents {
		extern sigc::signal<void, MouseMotionEvent *> onMouseMotion;
		extern sigc::signal<void, MouseButtonEvent *> onMouseDown;
		extern sigc::signal<void, MouseButtonEvent *> onMouseUp;
		extern sigc::signal<void, SDL_KeyboardEvent *> onKeyDown;
		extern sigc::signal<void, SDL_KeyboardEvent *> onKeyUp;
	}
}

#include "GuiWidget.h"
#include "GuiAdjustment.h"
#include "GuiImage.h"
#include "GuiButton.h"
#include "GuiToggleButton.h"
#include "GuiMultiStateImageButton.h"
#include "GuiImageButton.h"
#include "GuiISelectable.h"
#include "GuiRadioButton.h"
#include "GuiImageRadioButton.h"
#include "GuiRadioGroup.h"
#include "GuiFixed.h"
#include "GuiVScrollPortal.h"
#include "GuiVScrollBar.h"
#include "GuiLabel.h"
#include "GuiToolTip.h"
#include "GuiTabbed.h"
#include "GuiScreen.h"

#endif /* _GUI_H */
