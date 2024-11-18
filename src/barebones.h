char headerhtml[] PROGMEM =
#include "headerhtml.h"
;
char footerhtml[] PROGMEM =
#include "footerhtml.h"
;
char normalizecss[] PROGMEM =
#include "normalizecssmini.h"
;
char barebonescss[] PROGMEM =
#include "barebonescssmini.h"
;

#include "ESPAsyncWebServer.h"

void addHeader(AsyncResponseStream *responseconst char* title){response->printf_P(headerhtml, title);}  //Include title
void addFooter(AsyncResponseStream *response){response->printf_P(footerhtml);}
void printTagHx(AsyncResponseStream *response, String text, uint8_t level){response->printf_P(PSTR("<h%u>%s</h%u>"), level, text.c_str(), level);}
void printTagHx(AsyncResponseStream *response, const char* text, uint8_t level){response->printf_P(PSTR("<h%u>%s</h%u>"), level, text, level);}
void printTagPStart(AsyncResponseStream *response){response->print("<p>");}
void printTagPEnd(AsyncResponseStream *response){response->print("</p>");}
void printTagOlStart(AsyncResponseStream *response){response->print("<ol>");}
void printTagOlEnd(AsyncResponseStream *response){response->print("</ol>");}
void printTagUlStart(AsyncResponseStream *response){response->print("<ul>");}
void printTagUlEnd(AsyncResponseStream *response){response->print("</ul>");}
void printTagLiStart(AsyncResponseStream *response){response->print("<li>");}
void printTagLiEnd(AsyncResponseStream *response){response->print("</li>");}
void printTagDivStart(AsyncResponseStream *response){response->print("<div>");}
void printTagDivEnd(AsyncResponseStream *response){response->print("</div>");}
void printTagDivFullWidth(AsyncResponseStream *response){response->print("<div class=\"grid-container full\">");}
void printTagDivHalves(AsyncResponseStream *response){response->print("<div class=\"grid-container halves\">");}
void printTagDivThirds(AsyncResponseStream *response){response->print("<div class=\"grid-container thirds\">");}
void printTagDivQuarters(AsyncResponseStream *response){response->print("<div class=\"grid-container quarters\">");}
void printTagDivFifths(AsyncResponseStream *response){response->print("<div class=\"grid-container fifths\">");}
void printUrlButton(AsyncResponseStream *response, String text, String URL){response->printf_P(("<a class=\"button button-primary\" href=\"%s\" style=\"width:100%\">%s</a>"), URL.c_str(), text.c_str());}
void printUrlButton(AsyncResponseStream *response, const char* text, const char* URL){response->printf_P(("<a class=\"button button-primary\" href=\"%s\" style=\"width:100%\">%s</a>"), URL, text);}
void printTagFormStart(AsyncResponseStream *response, String URL){response->printf_P(PSTR("<form action=\"%s\" method=\"post\">"), URL.c_str());}
void printTagFormStart(AsyncResponseStream *response, const char* URL){response->printf_P(PSTR("<form action=\"%s\" method=\"post\">"), URL);}
void printTagFormEnd(AsyncResponseStream *response){response->print("</form>");}
void printFormTextInput(AsyncResponseStream *response, String type, String placeholder, String id){response->printf_P(PSTR("<input class=\"u-full-width\" type=\"%s\" placeholder=\"%s\" id=\"%s\" name=\"%s\">"), type.c_str(), placeholder.c_str(), id.c_str(), id.c_str());}
void printFormTextInput(AsyncResponseStream *response, const char* type, const char* placeholder, const char* id){response->printf_P(PSTR("<input class=\"u-full-width\" type=\"%s\" placeholder=\"%s\" id=\"%s\" name=\"%s\">"), type, placeholder, id, id);}

void printFormSubmitButton(AsyncResponseStream *response, String text){response->printf_P(PSTR("<input class=\"button-primary\" type=\"submit\" value=\"%s\">"), text.c_str());}
void printTagTableStart(AsyncResponseStream *response){response->print("<table>");}
void printTagTableEnd(AsyncResponseStream *response){response->print("</table>");}
void printTagTheadStart(AsyncResponseStream *response){response->print("<thead>");}
void printTagTheadEnd(AsyncResponseStream *response){response->print("</thead>");}
void printTagTbodyStart(AsyncResponseStream *response){response->print("<tbody>");}
void printTagTbodyEnd(AsyncResponseStream *response){response->print("</tbody>");}
void printTagTrStart(AsyncResponseStream *response){response->print("<tr>");}
void printTagTrEnd(AsyncResponseStream *response){response->print("</tr>");}
void printTagThStart(AsyncResponseStream *response){response->print("<th>");}
void printTagThEnd(AsyncResponseStream *response){response->print("</th>");}
void printTagTdStart(AsyncResponseStream *response){response->print("<td>");}
void printTagTdEnd(AsyncResponseStream *response){response->print("</td>");}
void printTagImg(AsyncResponseStream *response,  const char* url, uint16_t width, uint16_t height){response->printf_P(PSTR("<img src=\"%s\" width=%u height=%u>"), url, width, height);}
