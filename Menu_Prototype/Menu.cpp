#include "stdafx.h"
#include "Menu.h"

GuiStyle::GuiStyle(TTF_Font * setfont, float borderSiz, SDL_Color bodyCo, SDL_Color borderCo, SDL_Color textCo, SDL_Color bodyHighlightCo, SDL_Color borderHighlightCo, SDL_Color textHighlightCo)
    :bodyCol(bodyCo), borderCol(borderCo), textCol(textCo), bodyHighlightCol(bodyHighlightCo),
    borderHighlightCol(bodyHighlightCo), textHighlightCol(textHighlightCo), font(setfont),
    borderSize(borderSiz)
{
}

GuiStyle::GuiStyle()
{
}

GuiEntry::GuiEntry(const std::string & setMessage, SDL_Rect setShape, std::string setText, TTF_Font* setFont, SDL_Color setTextColor)
    : shape(setShape), message(setMessage), text(setText), font(setFont), textColor(setTextColor)
{
}


Gui::Gui(MathVector setDimensions, int setPadding, bool setHorizontal, GuiStyle & setStyle, std::vector<std::pair<std::string, std::string>> setEntries)
{
    visible = false;
    horizontal = setHorizontal;
    style = setStyle;
    dimensions = setDimensions;
    padding = setPadding;

    SDL_Rect shape;
    shape.w = dimensions.x;
    shape.h = dimensions.y;

    for (auto entry : setEntries)
    {
        std::string text;
        text = entry.first;

    }

}

MathVector Gui::getSize()
{
    return MathVector();
}
