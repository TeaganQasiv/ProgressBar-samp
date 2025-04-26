# ProgressBar-Samp
Sistema iniciado por GringX, apenas fiz uma versao em include!

# Natives
```pawn
PlayerShowProgressBar(playerid, const tittle[], const message[]);
```
> [!IMPORTANT]
> - Tittle: Cria um titulo para sua progress bar.
> - Message: Cria uma mensagem para sua progress bar. 

## Exemplo
```pawn
PlayerShowProgressBar(playerid, "Exemplo", "Exemplo");
SetTimerEx("Exemplo", 15000, false, "i", playerid); //sempre quando for criar coloque o timer em *15000*!

forward Exemplo(playerid);
public Exemplo(playerid)
{
  //seu codigo
  return 1;
}
```
