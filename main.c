int main() {
    int a, b;
    printf("Entrez deux entiers : ");
    scanf("%d %d", &a, &b);
    printf("La somme est : %d\n", a + b);
    
    // Ajoutez cette ligne pour empêcher la console de se fermer toute seule :
    getchar(); 
    return 0;
}