#pragma once

class GuiStyle
{
public:
    SDL_Color bodyCol;
    SDL_Color bodyHighlightCol;
    SDL_Color borderCol;
    SDL_Color borderHighlightCol;
    SDL_Color textCol;
    SDL_Color textHighlightCol;
    TTF_Font* font;

    float borderSize;

    GuiStyle(TTF_Font *setfont, float borderSiz,
        SDL_Color bodyCo, SDL_Color borderCo, SDL_Color textCo,
        SDL_Color bodyHighlightCo, SDL_Color borderHighlightCo, SDL_Color textHighlightCo);
        

    GuiStyle();
};


class GuiEntry
{
private:
    /* Handles appearance of the entry*/
    SDL_Rect shape;
    /*String returned when the entry is activated*/
    std::string message;
    /*Text Displayed on the entry*/
    std::string text;

    /* Surface to render the text to*/
    SDL_Surface *text_surface;
    /*The font the entry will use*/
    TTF_Font* font;
    /*The color of the text*/
    SDL_Color textColor;

public:
    GuiEntry(const std::string & setMessage, SDL_Rect setShape, std::string setText, TTF_Font* setFont, SDL_Color setTextColor);

};

class Gui
{
private:
    bool horizontal;
    GuiStyle style;

    MathVector dimensions;

    int padding;

public:

    std::vector<GuiEntry> entries;

    bool visible;

    Gui(MathVector setDimensions, int setPadding, bool horizontal,
        GuiStyle& style, std::vector<std::pair<std::string, std::string>> setEntries);

    MathVector getSize();

};