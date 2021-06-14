# 33131-Buzzer GROVE

Buzzer GROVE [33131](https://www.pierron.fr/interface-arduino-uno-5967.html)

<div style="text-align: justify">Le module Buzzer GROVE à un buzzer piézoélectrique comme composant principal. Le piézo peut être connecté à des sorties numériques et émettra une tonalité lorsque la sortie est ÉLEVÉE. Alternativement, il peut être connecté à une sortie de modulation analogique de largeur d’impulsion pour générer diverses tonalités et effets.</div>

Caractéristiques techniques :
- Alimentation : 3.3 V ou 5 V
- Niveau sonore : > 85 dB
- Fréquence : 2 300 Hz ±300 Hz

![L-33131](/img/L-33131.jpg)

# Usage :
Pour l’utilisation de ce module référez-vous aux indications présentes sur le circuit imprimé GROVE.

# Schémas :

![SCH-33131](/img/SCH-33131.jpg)
![BRD-33131](/img/BRD-33131.jpg)

# Complément sur la programmation :

Si vous souhaitez modifier l’intensité du son émis par le buzzer, référez-vous à l’image ci-dessous :

![C-33131](/img/C-33131.jpg)

# RESSOURCES À TÉLÉCHARGER :

Ressource utilisation : [S9013](https://github.com/pierron-asco-celda/33169-Telemetre_ir_GROVE/blob/main/src/Datasheet_GP2Y0A21YK.pdf)

# Exemple :
### Arduino / C++
```cpp
/*
    ** Buzzer module Grove **
       PIN 7 Module shield GROVE
       Bruit buzzer on/off 1s.
*/

void setup(){
  pinMode(7, OUTPUT);
}
 
void loop(){
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  delay(1000);
}
```
## À propos :

PIERRON ASCO-CELDA (https://www.pierron.fr).