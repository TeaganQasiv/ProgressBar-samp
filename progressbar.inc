#if defined _progressbar_included
	#endinput
#endif

#if !defined _samp_included
	#tryinclude <a_samp>
	#if !defined _samp_included
		#error could not locate a_samp.inc file, please check your server includes
	#endif
#endif

#define _progressbar_included
#define _progressbar_version 0x100

//
new PlayerText: Progess_Bar[MAX_PLAYERS][9];

public OnPlayerConnect(playerid)
{
	CarregarProgress(playerid);
	#if defined ppb_OnPlayerConnect
		return ppb_OnPlayerConnect(playerid);
	#else
		return 1;
	#endif
}
#if defined _ALS_OnPlayerConnect
	#undef OnPlayerConnect
#else
	#define _ALS_OnPlayerConnect
#endif
 
#define OnPlayerConnect ppb_OnPlayerConnect
#if defined ppb_OnPlayerConnect
	forward ppb_OnPlayerConnect(playerid);
#endif

stock CarregarProgress(playerid)
{
	Progess_Bar[playerid][0] = CreatePlayerTextDraw(playerid, 157.000, 392.000, "LD_POKE:cd10c");
	PlayerTextDrawTextSize(playerid, Progess_Bar[playerid][0], 110.000, 42.000);
	PlayerTextDrawAlignment(playerid, Progess_Bar[playerid][0], 1);
	PlayerTextDrawColor(playerid, Progess_Bar[playerid][0], 255);
	PlayerTextDrawSetShadow(playerid, Progess_Bar[playerid][0], 0);
	PlayerTextDrawSetOutline(playerid, Progess_Bar[playerid][0], 0);
	PlayerTextDrawBackgroundColor(playerid, Progess_Bar[playerid][0], 255);
	PlayerTextDrawFont(playerid, Progess_Bar[playerid][0], 4);
	PlayerTextDrawSetProportional(playerid, Progess_Bar[playerid][0], 1);

	Progess_Bar[playerid][1] = CreatePlayerTextDraw(playerid, 168.000, 397.000, "Aguarde");
	PlayerTextDrawLetterSize(playerid, Progess_Bar[playerid][1], 0.190, 0.899);
	PlayerTextDrawAlignment(playerid, Progess_Bar[playerid][1], 1);
	PlayerTextDrawColor(playerid, Progess_Bar[playerid][1], 1768516095);
	PlayerTextDrawSetShadow(playerid, Progess_Bar[playerid][1], 1);
	PlayerTextDrawSetOutline(playerid, Progess_Bar[playerid][1], 1);
	PlayerTextDrawBackgroundColor(playerid, Progess_Bar[playerid][1], 0);
	PlayerTextDrawFont(playerid, Progess_Bar[playerid][1], 1);
	PlayerTextDrawSetProportional(playerid, Progess_Bar[playerid][1], 1);

	Progess_Bar[playerid][2] = CreatePlayerTextDraw(playerid, 167.000, 407.000, "0");
	PlayerTextDrawLetterSize(playerid, Progess_Bar[playerid][2], 0.190, 0.899);
	PlayerTextDrawAlignment(playerid, Progess_Bar[playerid][2], 1);
	PlayerTextDrawColor(playerid, Progess_Bar[playerid][2], -1);
	PlayerTextDrawSetShadow(playerid, Progess_Bar[playerid][2], 1);
	PlayerTextDrawSetOutline(playerid, Progess_Bar[playerid][2], 1);
	PlayerTextDrawBackgroundColor(playerid, Progess_Bar[playerid][2], 0);
	PlayerTextDrawFont(playerid, Progess_Bar[playerid][2], 1);
	PlayerTextDrawSetProportional(playerid, Progess_Bar[playerid][2], 1);

	Progess_Bar[playerid][3] = CreatePlayerTextDraw(playerid, 178.000, 407.000, "/");
	PlayerTextDrawLetterSize(playerid, Progess_Bar[playerid][3], 0.190, 0.899);
	PlayerTextDrawAlignment(playerid, Progess_Bar[playerid][3], 1);
	PlayerTextDrawColor(playerid, Progess_Bar[playerid][3], -1);
	PlayerTextDrawSetShadow(playerid, Progess_Bar[playerid][3], 1);
	PlayerTextDrawSetOutline(playerid, Progess_Bar[playerid][3], 1);
	PlayerTextDrawBackgroundColor(playerid, Progess_Bar[playerid][3], 0);
	PlayerTextDrawFont(playerid, Progess_Bar[playerid][3], 1);
	PlayerTextDrawSetProportional(playerid, Progess_Bar[playerid][3], 1);

	Progess_Bar[playerid][4] = CreatePlayerTextDraw(playerid, 187.000, 407.000, "Progresso");
	PlayerTextDrawLetterSize(playerid, Progess_Bar[playerid][4], 0.190, 0.899);
	PlayerTextDrawAlignment(playerid, Progess_Bar[playerid][4], 1);
	PlayerTextDrawColor(playerid, Progess_Bar[playerid][4], -1);
	PlayerTextDrawSetShadow(playerid, Progess_Bar[playerid][4], 1);
	PlayerTextDrawSetOutline(playerid, Progess_Bar[playerid][4], 1);
	PlayerTextDrawBackgroundColor(playerid, Progess_Bar[playerid][4], 0);
	PlayerTextDrawFont(playerid, Progess_Bar[playerid][4], 1);
	PlayerTextDrawSetProportional(playerid, Progess_Bar[playerid][4], 1);

	Progess_Bar[playerid][5] = CreatePlayerTextDraw(playerid, 180.000, 410.000, "0");
	PlayerTextDrawLetterSize(playerid, Progess_Bar[playerid][5], 0.129, 0.699);
	PlayerTextDrawAlignment(playerid, Progess_Bar[playerid][5], 1);
	PlayerTextDrawColor(playerid, Progess_Bar[playerid][5], -1);
	PlayerTextDrawSetShadow(playerid, Progess_Bar[playerid][5], 1);
	PlayerTextDrawSetOutline(playerid, Progess_Bar[playerid][5], 1);
	PlayerTextDrawBackgroundColor(playerid, Progess_Bar[playerid][5], 0);
	PlayerTextDrawFont(playerid, Progess_Bar[playerid][5], 1);
	PlayerTextDrawSetProportional(playerid, Progess_Bar[playerid][5], 1);

	Progess_Bar[playerid][6] = CreatePlayerTextDraw(playerid, 176.000, 407.000, "0");
	PlayerTextDrawLetterSize(playerid, Progess_Bar[playerid][6], 0.129, 0.699);
	PlayerTextDrawAlignment(playerid, Progess_Bar[playerid][6], 1);
	PlayerTextDrawColor(playerid, Progess_Bar[playerid][6], -1);
	PlayerTextDrawSetShadow(playerid, Progess_Bar[playerid][6], 1);
	PlayerTextDrawSetOutline(playerid, Progess_Bar[playerid][6], 1);
	PlayerTextDrawBackgroundColor(playerid, Progess_Bar[playerid][6], 0);
	PlayerTextDrawFont(playerid, Progess_Bar[playerid][6], 1);
	PlayerTextDrawSetProportional(playerid, Progess_Bar[playerid][6], 1);

	Progess_Bar[playerid][7] = CreatePlayerTextDraw(playerid, 165.000, 419.000, "LD_SPAC:white");
	PlayerTextDrawTextSize(playerid, Progess_Bar[playerid][7], 95.000, 7.000);
	PlayerTextDrawAlignment(playerid, Progess_Bar[playerid][7], 1);
	PlayerTextDrawColor(playerid, Progess_Bar[playerid][7], 538976511);
	PlayerTextDrawSetShadow(playerid, Progess_Bar[playerid][7], 0);
	PlayerTextDrawSetOutline(playerid, Progess_Bar[playerid][7], 0);
	PlayerTextDrawBackgroundColor(playerid, Progess_Bar[playerid][7], 255);
	PlayerTextDrawFont(playerid, Progess_Bar[playerid][7], 4);
	PlayerTextDrawSetProportional(playerid, Progess_Bar[playerid][7], 1);

	Progess_Bar[playerid][8] = CreatePlayerTextDraw(playerid, 165.000, 419.000, "LD_SPAC:white");
	PlayerTextDrawTextSize(playerid, Progess_Bar[playerid][8], 0.000, 7.000);
	PlayerTextDrawAlignment(playerid, Progess_Bar[playerid][8], 1);
	PlayerTextDrawColor(playerid, Progess_Bar[playerid][8], 1804477439);
	PlayerTextDrawSetShadow(playerid, Progess_Bar[playerid][8], 0);
	PlayerTextDrawSetOutline(playerid, Progess_Bar[playerid][8], 0);
	PlayerTextDrawBackgroundColor(playerid, Progess_Bar[playerid][8], 255);
	PlayerTextDrawFont(playerid, Progess_Bar[playerid][8], 4);
	PlayerTextDrawSetProportional(playerid, Progess_Bar[playerid][8], 1);
	return 1;	
}

stock PlayerShowProgressBar(playerid, const tittle[], const message[]) return __PlayerBar(playerid, FixText(tittle), FixText(message));

stock __PlayerBar(playerid, tittle[], message[])
{
	__PlayerProgressBarTxt(playerid, tittle, message);
	SetTimerEx("__PlayerCreateProgressBar", 100, 0, "id", playerid);
	return 1;
}

stock __PlayerProgressBarTxt(playerid, tittle[] = "", message[] = "")
{
	text(playerid);
	PlayerTextDrawSetString(playerid, Progess_Bar[playerid][1], tittle);
	PlayerTextDrawSetString(playerid, Progess_Bar[playerid][4], message);
	return 1;
}

forward __PlayerCreateProgressBar(playerid, const tittle[], const message[]);
public __PlayerCreateProgressBar(playerid, const tittle[], const message[])
{
	new str[32];
	static progresso;
	format(str, sizeof(str), "%i", progresso);
	PlayerTextDrawTextSize(playerid, Progess_Bar[playerid][8], (0.0 + ((95 * ++progresso) / 100)), 7.000);
	PlayerTextDrawSetString(playerid, Progess_Bar[playerid][2], str);
	PlayerTextDrawShow(playerid, Progess_Bar[playerid][8]);
	if(progresso < 101.0) SetTimerEx("__PlayerCreateProgressBar", 150, false, "i", playerid);
		else for(new i; i < 9; i++) PlayerTextDrawHide(playerid, Progess_Bar[playerid][i]), progresso = 0;
	return 1;
}

stock text(playerid)
{
	for(new i = 0; i <9; i++) 
		PlayerTextDrawShow(playerid, Progess_Bar[playerid][i]);
	return 1;
}

stock FixText(const string[])
{
    new 
    	szFixed[1024], iPos, iLen;

    for(iLen = strlen(string); iPos < iLen; iPos ++) 
    {
        switch(string[iPos])
        {
			case '%':          szFixed[iPos] = 37;
			case '&':          szFixed[iPos] = 38;
			case '¡':          szFixed[iPos] = 64;
			case '°':          szFixed[iPos] = 124;
			case 'À':          szFixed[iPos] = 128;
			case 'Á':          szFixed[iPos] = 129;
			case 'Â':          szFixed[iPos] = 130;
			case 'Ä', 'Ã':     szFixed[iPos] = 131;
			case 'Ç':          szFixed[iPos] = 133;
			case 'È':          szFixed[iPos] = 134;
			case 'É':          szFixed[iPos] = 135;
			case 'Ê':          szFixed[iPos] = 136;
			case 'Ë':          szFixed[iPos] = 137;
			case 'Ì':          szFixed[iPos] = 138;
			case 'Í':          szFixed[iPos] = 139;
			case 'Î':          szFixed[iPos] = 140;
			case 'Ï':          szFixed[iPos] = 141;
			case 'Ò':          szFixed[iPos] = 142;
			case 'Ó':          szFixed[iPos] = 143;
			case 'Ô':          szFixed[iPos] = 144;
			case 'Ö', 'Õ':     szFixed[iPos] = 145;
			case 'Ù':          szFixed[iPos] = 146;
			case 'Ú':          szFixed[iPos] = 147;
			case 'Û':          szFixed[iPos] = 148;
			case 'Ü':          szFixed[iPos] = 149;
			case 'à':          szFixed[iPos] = 151;
			case 'á':          szFixed[iPos] = 152;
			case 'â':          szFixed[iPos] = 153;
			case 'ä', 'ã':     szFixed[iPos] = 154;
			case 'ç':          szFixed[iPos] = 156;
			case 'è':          szFixed[iPos] = 157;
			case 'é':          szFixed[iPos] = 158;
			case 'ê':          szFixed[iPos] = 159;
			case 'ë':          szFixed[iPos] = 160;
			case 'ì':          szFixed[iPos] = 161;
			case 'í':          szFixed[iPos] = 162;
			case 'î':          szFixed[iPos] = 163;
			case 'ï':          szFixed[iPos] = 164;
			case 'ò':          szFixed[iPos] = 165;
			case 'ó':          szFixed[iPos] = 166;
			case 'ô':          szFixed[iPos] = 167;
			case 'ö', 'õ':     szFixed[iPos] = 168;
			case 'ù':          szFixed[iPos] = 169;
			case 'ú':          szFixed[iPos] = 170;
			case 'û':          szFixed[iPos] = 171;
			case 'ü':          szFixed[iPos] = 172;
			case 'Ñ':          szFixed[iPos] = 173;
			case 'ñ':          szFixed[iPos] = 174;
			case '¿':          szFixed[iPos] = 175;
			case '`':          szFixed[iPos] = 177;
			default:           szFixed[iPos] = string[iPos];
		}
	}
    return szFixed;
}
