# LABORATORIO FONDAMENTI DI INFORMATICA 14 – 15 NOVEMBRE 2016
## PROGETTO “Polissonne”
Il progetto “Polissonne” si ispira alle regole dell’assonante gioco da tavolo ambientato nella cittadina francese “Carcassonne” e ne prevede la realizzazione in linguaggio C. 
Lo svolgimento verrà effettuato in gruppi (idealmente di 3 persone) e in modo incrementale, ovvero a ogni sessione di laboratorio verrà aggiunta una nuova funzionalità o una nuova modifica a seconda degli argomenti appresi a lezione.

## REGOLE BASE DEL GIOCO
L’obiettivo del gioco “Polissonne” è costruire un campus universitario accostando tessere che rappresentano frammenti di paesaggio. Ogni elemento “completato” fornisce al giocatore un punteggio da accumulare per vincere la partita. Il gioco termina con il piazzamento dell'ultima tessera; vince il giocatore che ha totalizzato più punti.

Sono possibili dai 2 ai 5 giocatori.
Ogni giocatore è identificato a inizio partita con l’inserimento del nome e l’associazione casuale di un simbolo, per esempio uno dei seguenti:
♥ “cuori”
♦ “quadri”
♣ “fiori”
♠ “picche”
☻ "smile"

Il simbolo identifica anche 8 “seguaci” assegnati ad ogni giocatore a inizio partita.
Ciascuna tessera è quadrata e può contenere su ciascuno dei 4 lati uno dei seguenti elementi:
* tratti di strada, inclusi incroci e curve
* parti di campus racchiusi da mura (con o senza servizio di rete Wi-Fi)
* parchi che circondano i campus e accolgono le strade.

Al centro di una tessera può anche essere presente:
* un dipartimento
Le tessere in totale sono 72.

All’inizio del gioco vengono “mescolate” (decidendo anche in modo casuale quali elementi di campus avranno il Wi-Fi) tutte le tessere e lasciate “coperte” nel mazzo ad eccezione della prima che è estratta in modo casuale dal sistema e posizionata al centro del tabellone.
Il gioco si svolge quindi a turno e ogni giocatore “pesca” una tessera (tramite il generatore casuale che la sottrae dal mazzo) e la ruota opportunamente per poi posizionarla sul tabellone facendo combaciare almeno un lato per proseguire il disegno degli elementi. Ogni lato della tessera posizionata deve essere coerente con tutte le carte già presenti sul tabellone con le quali confina.
Dopo aver posizionato la tessera, il giocatore può decidere di posizionare un suo “seguace” sopra uno degli elementi di terreno della tessera (una strada, un parco, un campus o un dipartimento) purché tale elemento non sia già reclamato da un altro seguace delle tessere affiancate. Il giocatore non può posizionare seguaci su tessere differenti da quella appena posata.
Il seguace posizionato diventa:
* un paninaro (P) nei tratti di strada
* uno studente (S) nei campus
* un nonno (N) nei parchi che circondano i campus
* un docente (D) nel dipartimento
Un elemento (strada, campus o parco ma non il dipartimento) può divenire reclamato da due o più seguaci, solo nel caso in cui tratti inizialmente separati (e sui quali siano stati piazzati dei seguaci) vengono uniti successivamente. 

Mentre i nonni rimangono sulla tessera fino alla fine della partita, gli altri tre tipi di seguaci possono essere rimossi e riutilizzati qualora l'elemento associato venga completato e non sia più espandibile. Una strada è completata se entrambe le estremità terminano in incroci, campus o dipartimenti; un campus è completato se le sue mura formano una figura chiusa; un dipartimento è completato se è circondato da 8 tessere in tutte le direzioni.

Il completamento di elementi fornisce immediatamente punti al giocatore che vi aveva posizionato dei seguaci o al giocatore che possiede più seguaci su quell'elemento (o a più giocatori nel caso di parità) nel caso di elemento reclamato da più seguaci. Il punteggio aumenta con la lunghezza delle strade e con le dimensioni dei campus ed in relazione ad alcuni elementi speciali, in quanto alcune aree dei campus possiedono il Wi-Fi e valgono il doppio. I punti relativi agli elementi rimasti incompleti verranno attribuiti al termine della
partita.

***

Gruppo Fedeli, Ferrini. 2016
