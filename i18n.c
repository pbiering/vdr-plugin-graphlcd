/**
 *  GraphLCD plugin for the Video Disk Recorder
 *
 *  i18n.c  -  Internationalization
 *
 *  (c) 2001-2004 Carsten Siebholz <c.siebholz AT t-online de>
 **/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program;                                              *
 *   if not, write to the Free Software Foundation, Inc.,                  *
 *   59 Temple Place, Suite 330, Boston, MA  02111-1307  USA               *
 *                                                                         *
 ***************************************************************************/

#include "i18n.h"


const tI18nPhrase Phrases[] =
{
	{
		"Output to graphic LCD",// English
		"Ausgabe auf einem Grafik-LCD",// Deutsch
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Affichage sur un �cran LCD",// Fran�ais
		"",// TODO Norsk
		"Ohjaa graafista LCD-n�ytt��",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Ecran grafic LCD/VFD",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"Plugin active",
		"Plugin aktiv",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Plugin actif",
		"",// TODO Norsk
		"Laajennos aktiivinen",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Plugin activat",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"JanFebMarAprMayJunJulAugSepOctNovDec",
		"JanFebM�rAprMaiJunJulAugSepOktNovDez",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"JanFevMarAvrMaiJunJuiAouSepOctNovDec",
		"",// TODO Norsk
		"TamHelMaaHuhTouKesHeiEloSyyLokMarJou",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"IanFebMarAprMaiIunIulAugSepOctNoiDec",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"Show Date/Time",
		"Zeige Datum/Uhrzeit",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Afficher Date/Heure",
		"",// TODO Norsk
		"N�yt� p�iv�m��r�/kello",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Arat� Data/Ora",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"not in menu",
		"nicht im Menu",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"pas dans le menu"
		"",// TODO Norsk
		"ei valikossa",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"nu �n meniu",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"Show Channel",
		"Zeige Kanal",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Afficher le nom de la Chaine",
		"",// TODO Norsk
		"N�yt� kanava",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Arat� canalul",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"Show Logo",
		"Zeige Logo",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Afficher le Logo",
		"",// TODO Norsk
		"N�yt� logo",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Arat� logo",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"Show Logo on Replay",
		"Zeige Logo bei Wiedergabe",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Afficher le Logo en lecture",
		"",// TODO Norsk
		"N�yt� logo toistotilassa",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Arat� logo �n timpul red�rii",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"Show Symbols",
		"Zeige Symbole",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Afficher les Symboles",
		"",// TODO Norsk
		"N�yt� symbolit",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Arat� simboluri",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"Show ET Symbols",
		"Zeige ET Symbole",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Afficher les Symboles ET",
		"",// TODO Norsk
		"N�yt� ET-symbolit",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Arat� simboluri externe",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"Show Program",
		"Zeige Programm",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Afficher les programmes",
		"",// TODO Norsk
		"N�yt� ohjelma",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Arat� programul",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"Show Timebar",
		"Zeige Zeitbalken",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Afficher la barre de progression",
		"",// TODO Norsk
		"N�yt� aikajana",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Arat� linia timp",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"Show Menu",
		"Zeige Men�s",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Afficher le menu",
		"",// TODO Norsk
		"N�yt� valikko",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Arat� meniuri",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"Show Messages",
		"Zeige Nachrichten",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Afficher les messages",
		"",// TODO Norsk
		"N�yt� viestit",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Arat� mesaje",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"Show Color Buttons",
		"Zeige farbige Tasten",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Afficher les boutons couleurs",
		"",// TODO Norsk
		"N�yt� v�ripainikkeet",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Arat� butoanele colorate",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"Show Volume",
		"Zeige Lautst�rke",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Afficher le Volume",
		"",// TODO Norsk
		"N�yt� ��nenvoimakkuus",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Arat� volumul",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"compressed",
		"komprimiert",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Compress�",
		"",// TODO Norsk
		"pakattu",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"comprimat",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"auto",
		"auto",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"auto",
		"",// TODO Norsk
		"automaattinen",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"auto",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"medium",
		"mittel",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"moyen",
		"",// TODO Norsk
		"keskikokoinen",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"mediu",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"large",
		"gro�",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"grand",
		"",// TODO Norsk
		"suuri",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"mare",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"Show free Cards",
		"Zeige freie Karten",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Afficher les cartes disponibles",
		"",// TODO Norsk
		"N�yt� vapaat vastaanottimet",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Arat� receptoare libere",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"Replay",
		"Spiele",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Lecture",
		"",// TODO Norsk
		"Toistotila",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Redare",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"DVD",
		"DVD",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"DVD",
		"",// TODO Norsk
		"DVD",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"DVD",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"Music",
		"Musik",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Musique",
		"",// TODO Norsk
		"Musiikki",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Muzic�",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"File",
		"Datei",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Fichier:",
		"",// TODO Norsk
		"Tiedostot",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Fi�ier",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"Image",
		"Bild",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Image",
		"",// TODO Norsk
		"Kuvat",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Imagine",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"CD",
		"CD",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"CD",
		"",// TODO Norsk
		"CD",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"CD",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"Unknown title",
		"Unbekannter Titel",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Titre inconnu",
		"",// TODO Norsk
		"Tuntematon nimi",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Titlu necunoscut",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"Identify replay type",
		"Wiedergabetyp erkennen",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Identifier le type de lecture",
		"",// TODO Norsk
		"Tunnista toistotilan tyyppi",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Identificarea tipului red�rii",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"Modify replay string",
		"Wiedergabetext ver�ndern",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Modifier la chaine de lecture",
		"",// TODO Norsk
		"Muokkaa toistotilan merkkijonoa",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Modifica textul red�rii",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"Scroll text lines",
		"Textzeilen scrollen",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Faire d�filer le texte",
		"",// TODO Norsk
		"Vierit� tekstirivej�",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Deruleaz� liniile text",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"Scroll speed",
		"Scrollgeschwindigkeit",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Vitesse de d�filement",
		"",// TODO Norsk
		"Vieritysnopeus",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Viteza derul�rii",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"Scroll time interval",
		"Zeitabstand beim Scrollen",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Intervalle de d�filement",
		"",// TODO Norsk
		"Vierityksen p�ivitysv�li",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Interval derulare",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"never",
		"niemals",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"jamais",
		"",// TODO Norsk
		"ei koskaan",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"niciodat�",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"once",
		"einmal",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"une fois",
		"",// TODO Norsk
		"kerran",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"odat�",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"always",
		"st�ndig",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"toujours",
		"",// TODO Norsk
		"aina",// Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"�ntotdeauna",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"Brightness on user activity",
		"Helligkeit bei Nutzeraktivit�t",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Luminosit� en utilisation",
		"",// TODO Norsk
		"",// TODO Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Luminozitate la utilizare",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"Brightness on user inactivity",
		"Helligkeit bei Nutzerinaktivit�t",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Luminosit� en non-utilisation",
		"",// TODO Norsk
		"",// TODO Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Luminozitate la inactivitate",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{
		"Brightness delay [s]",
		"Verz�gerung der Helligkeit [s]",
		"",// TODO Slovenski
		"",// TODO Italiano
		"",// TODO Nederlands
		"",// TODO Portugu�s
		"Delai de Luminosit� [s]",
		"",// TODO Norsk
		"",// TODO Suomi
		"",// TODO Polski
		"",// TODO Espa�ol
		"",// TODO Ellinika
		"",// TODO Svenska
		"Limita luminozitate",// Rom�n�
		"",// TODO Magyar
		"",// TODO Catal�
		"",// TODO Russian
		"",// TODO Croatian
	},
	{ NULL }
};
