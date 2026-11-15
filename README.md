# calcul-c

Petit programme en langage C qui lit deux nombres entiers saisis au clavier et affiche leur somme.

## Coordonnées de l'étudiant

- **Nom et prénom :** HAITAM ELGHAZI
- **Établissement :** École Nationale des Sciences Appliquées (ENSA) de Khouribga
- **Formation :** 1re année du cycle ingénieur
- **Module :** Introduction à l'ingénierie digitale (IID)
- **Compte GitHub :** [HtmGhz1726](https://github.com/HtmGhz1726)
- **Adresse e-mail configurée pour Git :** [htmmirror@gmail.com](mailto:htmmirror@gmail.com)

## Contexte

Ce projet correspond à l'exercice 1 du TP **Git et GitHub** du module *Introduction à l'ingénierie digitale (IID)*, à l'ENSA Khouribga.

L'objectif est de créer un projet C, de suivre son évolution avec Git (commits), puis de publier le dépôt sur GitHub.

## Fonctionnalités

- Demander à l'utilisateur de saisir deux entiers.
- Calculer leur somme.
- Afficher le résultat à l'écran.

## Fichiers du projet

| Fichier | Description |
|---|---|
| `main.c` | Code source du programme en C. |
| `.gitignore` | Exclut les exécutables `calcul`, `calcul.exe` et les fichiers objets `*.o` du suivi Git. |
| `README.md` | Présente le projet et les étapes de compilation et d'exécution. |

## Prérequis

- Un compilateur C, par exemple GCC.
- Git pour consulter ou modifier l'historique du projet.

## Compilation

Depuis le dossier du projet, exécuter :

```bash
gcc main.c -o calcul
```

## Exécution

Dans Git Bash, lancer le programme avec :

```bash
./calcul
```

Le programme demande ensuite deux nombres entiers.

### Exemple

```text
Entrez deux entiers (a b) : 12 30
Somme = 42
```

## Gestion des versions avec Git

Le projet a été enregistré progressivement dans Git à travers les commits suivants :

1. `Initialiser le projet C` — création du fichier `main.c`.
2. `Ajouter le calcul de la somme de deux entiers` — lecture de deux entiers et affichage de leur somme.
3. `Ajouter .gitignore et README` — ajout des règles d'exclusion et de cette documentation.
4. `Preciser l'invite de saisie` — amélioration du message affiché avant la saisie.

## Dépôt GitHub

[Consulter le dépôt calcul-c](https://github.com/HtmGhz1726/calcul-c)
