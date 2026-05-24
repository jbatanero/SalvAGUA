#include <stdio.h> 

int main() { 

int moradores; 
char opcaoTarifa; 
 
float precoMetroCubico; 
 
float banhosPorDia; 
float tempoMedioBanho; 
float vezesLoucaDia; 
float frequenciaMaquina; 
 
float consumoBanho; 
float consumoTorneira; 
float consumoMaquina; 
float consumoTotalLitros; 
float consumoTotalM3; 
float consumoPorPessoaDia; 
 
float valorAgua; 
float valorEsgoto; 
float valorTotal; 
 
printf("=========================================================\n"); 
printf("       SALVAGUA - CONSUMO DE AGUA RESIDENCIAL     \n"); 
printf("=========================================================\n"); 
 
printf("\nNumero de moradores da residencia: "); 
scanf("%d", &moradores); 
 
printf("\nDeseja utilizar a tarifa padrao de R$ 6.40 por m3? (S/N): "); 
scanf(" %c", &opcaoTarifa); 
 
if (opcaoTarifa == 'S' || opcaoTarifa == 's') { 
 
   precoMetroCubico = 6.40; 
 
} else { 
 
   printf("Informe a tarifa por m3 (use ponto, ex: 7.25): R$ "); 
   scanf("%f", &precoMetroCubico); 
} 
 
printf("\n--- HABITOS DE CONSUMO ---\n"); 
 
printf("Quantidade total de banhos por dia: "); 
scanf("%f", &banhosPorDia); 
 
printf("Tempo medio de cada banho (minutos): "); 
scanf("%f", &tempoMedioBanho); 
 
printf("Quantidade de vezes que a louca e lavada por dia: "); 
scanf("%f", &vezesLoucaDia); 
 
printf("Quantidade de vezes que a maquina de lavar e usada por mes: "); 
scanf("%f", &frequenciaMaquina); 
 
/* CALCULOS */ 
 
consumoBanho = banhosPorDia * tempoMedioBanho * 9 * 30; 
 
consumoTorneira = vezesLoucaDia * 25 * 30; 
 
consumoTorneira = consumoTorneira + (moradores * 3 * 1 * 30); 
 
consumoMaquina = frequenciaMaquina * 120; 
 
consumoTotalLitros = 
   consumoBanho + 
   consumoTorneira + 
   consumoMaquina; 
 
consumoTotalM3 = consumoTotalLitros / 1000; 
 
consumoPorPessoaDia = 
   (consumoTotalLitros / 30) / moradores; 
 
valorAgua = consumoTotalM3 * precoMetroCubico; 
 
valorEsgoto = valorAgua; 
 
valorTotal = valorAgua + valorEsgoto; 
 
printf("\n\n================ RELATORIO DE CONSUMO ==================\n"); 
 
printf("Consumo estimado no banho:       %.0f Litros/Mes\n", consumoBanho); 
printf("Consumo estimado nas torneiras:  %.0f Litros/Mes\n", consumoTorneira); 
printf("Consumo estimado na maquina:     %.0f Litros/Mes\n", consumoMaquina); 
 
printf("--------------------------------------------------------\n"); 
 
printf("Consumo total residencial:       %.0f m3/Mes\n", consumoTotalM3); 
printf("Media por pessoa:                %.0f Litros/Dia\n", consumoPorPessoaDia); 
 
printf("--------------------------------------------------------\n"); 
 
printf("Valor da agua:                   R$ %.2f\n", valorAgua); 
printf("Valor do esgoto:                 R$ %.2f\n", valorEsgoto); 
 
printf("--------------------------------------------------------\n"); 
 
printf("VALOR TOTAL DA FATURA:           R$ %.2f\n", valorTotal); 
 
printf("========================================================\n"); 
 
printf("\nDIAGNOSTICO:\n"); 
 
if (consumoPorPessoaDia > 220) { 
 
   printf("ALERTA CRITICO!\n"); 
   printf("O consumo esta muito acima do recomendado.\n"); 
   printf("Pode haver desperdicio ou vazamentos.\n"); 
 
} 
else if (consumoPorPessoaDia > 110) { 
 
   printf("CONSUMO ELEVADO.\n"); 
   printf("Sua residencia esta acima da meta recomendada.\n"); 
   printf("Reduzir alguns minutos de banho pode gerar economia.\n"); 
 
} 
else { 
 
   printf("PARABENS!\n"); 
   printf("Sua residencia apresenta consumo consciente de agua.\n"); 
 
} 
 
printf("\nObrigado por utilizar o SalvAgua!\n"); 
printf("Para realizar um novo calculo, execute o programa novamente.\n"); 
 
return 0; 
 

} 
