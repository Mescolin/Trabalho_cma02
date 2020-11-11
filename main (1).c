#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAMANHO 100

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao,hotel,dia,mes,ano,ano_out,mes_out,dia_out,pessoas,confirmacao,i,avaliacao;
    char nome [80],dicas[TAMANHO];
    float total_pagar;
    do{
    printf ("\n\n\t\t\t\t********* BEM VINDO AO DARAJOR HOTEIS*********\n\n\n");

    printf("Temos hoteis disponiveis nas seguintes cidades: \n");
    printf("(1)- Rio de Janeiro (RJ)\n");
    printf("(2)- Porto de Galinhas (PE)\n");
    printf("(3)- Gramado (RS)\n");
    printf("(4)- Foz do Iguacu (PR)\n");

    printf("\n\nInforme o destino da sua viagem: ");
    scanf("%d",&opcao);

    switch(opcao)
    {
    case 1:
        printf("\n\nNo Rio de Janeiro temos 4 hoteis disponiveis, que sao: \n\n");
        printf("(1) - COPACABANA PALACE - RS 1395,00 p/ dia\n");
        printf("(2) - SHERATON GRAND RIO HOTEL E RESORT - RS 705,00 p/ dia\n");
        printf("(3) - MIRAMAR HOTEL BY WINDSOR - RS 547,00 p/ dia\n");
        printf("(4) - HILTON BARRA RIO DE JANEIRO - RS 307,00 p/ dia\n");

        printf("\n\nInforme qual hotel gostaria de ir: ");
        scanf("%d",&hotel);

        switch(hotel)
        {
        case 1:
            printf("Informacoes sobre o hotel escolhido: \n");
            printf(" --> Icone da hotelaria brasileira, o Belmond Copacabana Palace eh um dos mais antigos e luxuosos hoteis do Rio de Janeiro.\n");
            printf(" --> Todos os quartos oferecem cama king-size e contam com mimos como sandalias Havaianas de cortesia.\n");
            printf(" --> Acomodacoes superiores possuem varanda com vista para a praia, colchoes ortopedicos e enxoval 300 fios.\n");
            printf(" --> Cafe da manha incluso.\n");
            printf(" --> Possui uma diaria de RS 1395,00.\n\n");

            printf("===========================================\n");

            printf("Informe seu nome completo: ");
            setbuf(stdin, NULL);
            scanf("%[^\n]s", nome);

            printf("\nInforme o dia que ira fazer o check in: ");
            scanf("%d",&dia);

            printf("\nInforme o mes que ira fazer o check in: ");
            scanf("%d",&mes);

            printf("\nInforme o ano que ira fazer o check in: ");
            scanf("%d",&ano);

            printf("\nInforme o dia que ira fazer o check out: ");
            scanf("%d",&dia_out);

            printf("\nInforme o mes que ira fazer o check out: ");
            scanf("%d",&mes_out);

            printf("\nInforme o ano que ira fazer o check out: ");
            scanf("%d",&ano_out);

            printf("\nInforme a quantidade de pessoas que ficara no quarto com voce: ");
            scanf("%d",&pessoas);

            printf("\nDeseja confimar o agendamento deste hotel ? ");
            printf("\n(1) - SIM");
            printf("\n(2) - NAO");
            printf("\nSua opcao: ");
            scanf("%d",&confirmacao);

            switch (confirmacao)
            {
            case 1:
                printf("\n\n\nPARABENS %s !!!",nome);
                printf("\nO numero do quarto eh: %d",rand () % 100);
                printf("\nO seu agendamento para o dia %d do mes %d do ano de %d ate o dia %d do mes %d do ano %d no HOTEL COPACABANA PALACE foi confirmado\n\n\n",dia,mes,ano,dia_out,mes_out,ano_out);
                total_pagar=pessoas*1395.00;
                printf("\nTotal a pagar sera de: %.2f",total_pagar);
                printf("\n OBS: O valor total é o numero pessoas vezes o valor da diaria");
            break;
            case 2:
                printf("\nAgendamento nao confirmado!!\n\n\n");
            break;
            default: printf("OPÇÃO INVÁLIDA!\n");
            }
        break;
        case 2:
            printf("Informacoes sobre o hotel escolhido: \n");
            printf(" --> Este resort 5 estrelas exclusivo foi reformado recentemente e fica a beira-mar da badalada Praia do Leblon, na Zona Sul do Rio de Janeiro.\n");
            printf(" --> Os quartos do Sheraton Grand Rio a espacosos e tambem foram reformados com decoracao moderna e móveis contemporaneos de luxo.\n");
            printf(" --> Todos incluem ar-condicionado e varanda privativa com uma vista incrível para a praia.\n");
            printf(" --> Cafe da manha incluso.\n");
            printf(" --> Possui uma diaria de RS 705,00.\n\n");

            printf("===========================================\n");

            printf("Informe seu nome completo: ");
            setbuf(stdin, NULL);
            scanf("%[^\n]s", nome);

            printf("\nInforme o dia que ira fazer o check in: ");
            scanf("%d",&dia);

            printf("\nInforme o mes que ira fazer o check in: ");
            scanf("%d",&mes);

            printf("\nInforme o ano que ira fazer o check in: ");
            scanf("%d",&ano);

            printf("\nInforme o dia que ira fazer o check out: ");
            scanf("%d",&dia_out);

            printf("\nInforme o mes que ira fazer o check out: ");
            scanf("%d",&mes_out);

            printf("\nInforme o ano que ira fazer o check out: ");
            scanf("%d",&ano_out);

            printf("\nInforme a quantidade de pessoas que ficara no quarto com voce: ");
            scanf("%d",&pessoas);

            printf("\nDeseja confimar o agendamento deste hotel ? ");
            printf("\n(1) - SIM");
            printf("\n(2) - NAO");
            printf("\nSua opcao: ");
            scanf("%d",&confirmacao);

            switch (confirmacao)
            {
            case 1:
                printf("\n\n\nPARABENS %s !!!",nome);
                printf("\nO numero do quarto eh: %d",rand () % 100);
                printf("\nO seu agendamento para o dia %d do mes %d do ano de %d ate o dia %d do mes %d do ano %d no SHERATON GRAND RIO HOTEL E RESORT foi confirmado\n\n\n",dia,mes,ano,dia_out,mes_out,ano_out);
                total_pagar=pessoas*705,00;
                printf("\nTotal a pagar sera de: %.2f",total_pagar);
                printf("\n OBS: O valor total é o numero pessoas vezes o valor da diaria");
            break;
            case 2:
                printf("\nAgendamento nao confirmado!!\n\n\n");
            break;
            default: printf("OPÇÃO INVÁLIDA!\n");
            }
        break;
        case 3:
            printf("Informacoes sobre o hotel escolhido: \n");
            printf(" --> Situado em frente à famosa Praia de Copacabana, o Miramar Hotel by Windsor dispõe de uma piscina em granito verde e academia moderna.\n");
            printf(" --> Este hotel design aceita animais de estimação e oferece serviço de mordomo, além de WiFi gratuito.\n");
            printf(" --> Você pode começar o dia admirando a bela vista da praia.\n");
            printf(" --> Cafe da manha incluso.\n");
            printf(" --> Possui uma diaria de RS 547,00.\n\n");

            printf("===========================================\n");

            printf("\nInforme seu nome completo: ");
            setbuf(stdin, NULL);
            scanf("%[^\n]s", nome);

            printf("\nInforme o dia que ira fazer o check in: ");
            scanf("%d",&dia);

            printf("\nInforme o mes que ira fazer o check in: ");
            scanf("%d",&mes);

            printf("\nInforme o ano que ira fazer o check in: ");
            scanf("%d",&ano);

            printf("\nInforme o dia que ira fazer o check out: ");
            scanf("%d",&dia_out);

            printf("\nInforme o mes que ira fazer o check out: ");
            scanf("%d",&mes_out);

            printf("\nInforme o ano que ira fazer o check out: ");
            scanf("%d",&ano_out);

            printf("\nInforme a quantidade de pessoas que ficara no quarto com voce: ");
            scanf("%d",&pessoas);

            printf("\nDeseja confimar o agendamento deste hotel ? ");
            printf("\n(1) - SIM");
            printf("\n(2) - NAO");
            printf("\nSua opcao: ");
            scanf("%d",&confirmacao);

            switch (confirmacao)
            {
            case 1:
                printf("\n\n\nPARABENS %s !!!",nome);
                printf("\nO numero do quarto eh: %d",rand () % 100);
                printf("\nO seu agendamento para o dia %d do mes %d do ano de %d ate o dia %d do mes %d do ano %d no Hotel Miramar foi confirmado\n\n\n",dia,mes,ano,dia_out,mes_out,ano_out);
                total_pagar=pessoas*547,00;
                printf("\nTotal a pagar sera de: %.2f",total_pagar);
                printf("\n OBS: O valor total é o numero pessoas vezes o valor da diaria");
            break;
            case 2:
                printf("\nAgendamento nao confirmado!!\n\n\n");
            break;
            default: printf("OPÇÃO INVÁLIDA!\n");
            }
        break;
        case 4:
            printf("Informacoes sobre o hotel escolhido: \n");
            printf(" --> Localizado no animado bairro da Barra da Tijuca, no Rio de Janeiro, a 7 km da Praia da Barra.\n");
            printf(" --> O Hilton Barra Rio de Janeiro oferece piscina na cobertura com impressionante vista do lago.\n");
            printf(" --> Os modernos quartos e suítes têm decoração elegante.\n");
            printf(" --> Algumas categorias de quarto incluem Wi-Fi gratuito. Você pode desfrutar do serviço de quarto 24 horas\n.");
            printf(" --> Cafe da manha incluso.\n");
            printf(" --> Possui uma diaria de RS 307,00.\n\n");

            printf("===========================================\n");

            printf("\nInforme seu nome completo: ");
            setbuf(stdin, NULL);
            scanf("%[^\n]s", nome);

            printf("\nInforme o dia que ira fazer o check in: ");
            scanf("%d",&dia);

            printf("\nInforme o mes que ira fazer o check in: ");
            scanf("%d",&mes);

            printf("\nInforme o ano que ira fazer o check in: ");
            scanf("%d",&ano);

            printf("\nInforme o dia que ira fazer o check out: ");
            scanf("%d",&dia_out);

            printf("\nInforme o mes que ira fazer o check out: ");
            scanf("%d",&mes_out);

            printf("\nInforme o ano que ira fazer o check out: ");
            scanf("%d",&ano_out);

            printf("\nInforme a quantidade de pessoas que ficara no quarto com voce: ");
            scanf("%d",&pessoas);

            printf("\nDeseja confimar o agendamento deste hotel ? ");
            printf("\n(1) - SIM");
            printf("\n(2) - NAO");
            printf("\nSua opcao: ");
            scanf("%d",&confirmacao);

            switch (confirmacao)
            {
            case 1:
                printf("\n\n\nPARABENS %s !!!",nome);
                printf("\nO numero do quarto eh: %d",rand () % 100);
                printf("\nO seu agendamento para o dia %d do mes %d do ano de %d ate o dia %d do mes %d do ano %d no Hotel Hilton Barra foi confirmado\n\n\n",dia,mes,ano,dia_out,mes_out,ano_out);
                total_pagar=pessoas*307,00;
                printf("\nTotal a pagar sera de: %.2f",total_pagar);
                printf("\n OBS: O valor total é o numero pessoas vezes o valor da diaria");
             break;
            case 2:
                printf("\nAgendamento nao confirmado!!\n\n\n");
            break;
            default: printf("OPÇÃO INVÁLIDA!\n");
            }
        break;
        default: printf("OPÇÃO INVÁLIDA!\n");
        }
    break;
    case 2:
        printf("\n\nEm Porto de Galinhas temos 4 hoteis disponiveis, que sao: \n\n");
        printf("(1) - SUMMERVILLER BEACH RESORT - RS 1807,00 p/ dia\n");
        printf("(2) - BEACH CLASS MURO ALTO - RS 1128,00 p/ dia\n");
        printf("(3) - MARESIA SUITES BEIRA MAR - RS 351,00 p/ dia\n");
        printf("(4) - BEACH CLASS ECO LIFE - RS 288,00 p/ dia\n");

        printf("\n\nInforme qual hotel gostaria de ir: ");
        scanf("%d",&hotel);

        switch(hotel)
        {
        case 1:
            printf("Informacoes sobre o hotel escolhido: \n");
            printf(" --> O Summerville Beach Resort está situado em uma localização privilegiada, à beira da Praia de Muro Alto, sendo ideal para quem quer relaxar e ficar próximo à natureza.\n");
            printf(" --> Os seis tipos de acomodação, com vista para o mar ou para o jardim.\n");
            printf(" --> estão equipados com TV a cabo, internet gratuita, frigobar, micro-ondas, ar-condicionado, cofre e secador de cabelos..\n");
            printf(" --> Cafe da manha incluso.\n");
            printf(" --> Possui uma diaria de RS 1807,00.\n\n");

            printf("===========================================\n");

            printf("Informe seu nome completo: ");
            setbuf(stdin, NULL);
            scanf("%[^\n]s", nome);

            printf("\nInforme o dia que ira fazer o check in: ");
            scanf("%d",&dia);

            printf("\nInforme o mes que ira fazer o check in: ");
            scanf("%d",&mes);

            printf("\nInforme o ano que ira fazer o check in: ");
            scanf("%d",&ano);

            printf("\nInforme o dia que ira fazer o check out: ");
            scanf("%d",&dia_out);

            printf("\nInforme o mes que ira fazer o check out: ");
            scanf("%d",&mes_out);

            printf("\nInforme o ano que ira fazer o check out: ");
            scanf("%d",&ano_out);

            printf("\nInforme a quantidade de pessoas que ficara no quarto com voce: ");
            scanf("%d",&pessoas);

            printf("\nDeseja confimar o agendamento deste hotel ? ");
            printf("\n(1) - SIM");
            printf("\n(2) - NAO");
            printf("\nSua opcao: ");
            scanf("%d",&confirmacao);

            switch (confirmacao)
            {
            case 1:
                printf("\n\n\nPARABENS %s !!!",nome);
                printf("\nO numero do quarto eh: %d",rand () % 100);
                printf("\nO seu agendamento para o dia %d do mes %d do ano de %d ate o dia %d do mes %d do ano %d no SUMMERVILLER BEACH RESORT foi confirmado\n\n\n",dia,mes,ano,dia_out,mes_out,ano_out);
                total_pagar=pessoas*1807,00;
                printf("\nTotal a pagar sera de: %.2f",total_pagar);
                printf("\n OBS: O valor total é o numero pessoas vezes o valor da diaria");
            break;
            case 2:
                printf("\nAgendamento nao confirmado!!\n\n\n");
            break;
            default: printf("OPÇÃO INVÁLIDA!\n");
            }
        break;
        case 2:
            printf("Informacoes sobre o hotel escolhido: \n");
            printf(" --> Dispondo de sauna e piscina ao ar livre, o Beach Class Muro Alto está localizado em Porto de Galinhas.\n");
            printf(" --> Durante sua estadia, você pode se divertir no parque aquático e desfrutar de refeições no restaurante do local.\n");
            printf(" --> A Praia de Maracaípe fica a 3 km da propriedade. A propriedade fornece Wi-Fi gratuito.\n");
            printf(" --> Cafe da manha incluso.\n");
            printf(" --> Possui uma diaria de RS 1128,00.\n\n");

            printf("===========================================\n");

            printf("\nInforme seu nome completo: ");
            setbuf(stdin, NULL);
            scanf("%[^\n]s", nome);

            printf("\nInforme o dia que ira fazer o check in: ");
            scanf("%d",&dia);

            printf("\nInforme o mes que ira fazer o check in: ");
            scanf("%d",&mes);

            printf("\nInforme o ano que ira fazer o check in: ");
            scanf("%d",&ano);

            printf("\nInforme o dia que ira fazer o check out: ");
            scanf("%d",&dia_out);

            printf("\nInforme o mes que ira fazer o check out: ");
            scanf("%d",&mes_out);

            printf("\nInforme o ano que ira fazer o check out: ");
            scanf("%d",&ano_out);

            printf("\nInforme a quantidade de pessoas que ficara no quarto com voce: ");
            scanf("%d",&pessoas);

            printf("\nDeseja confimar o agendamento deste hotel ? ");
            printf("\n(1) - SIM");
            printf("\n(2) - NAO");
            printf("\nSua opcao: ");
            scanf("%d",&confirmacao);

            switch (confirmacao)
            {
            case 1:
                printf("\n\n\nPARABENS %s !!!",nome);
                printf("\nO numero do quarto eh: %d",rand () % 100);
                printf("\nO seu agendamento para o dia %d do mes %d do ano de %d ate o dia %d do mes %d do ano %d no BEACH CLASS MURO ALTO foi confirmado\n\n\n",dia,mes,ano,dia_out,mes_out,ano_out);
                total_pagar=pessoas*1128,00;
                printf("\nTotal a pagar sera de: %.2f",total_pagar);
                printf("\n OBS: O valor total é o numero pessoas vezes o valor da diaria");
            break;
            case 2:
                printf("\nAgendamento nao confirmado!!\n\n\n");
            break;
            default: printf("OPÇÃO INVÁLIDA!\n");
            }
        break;
        case 3:
            printf("Informacoes sobre o hotel escolhido: \n");
            printf(" --> Localizada à beira da Praia de Porto de Galinhas,a Maresia Suites Beira Mar é um espaço tanto para quem quer descansar quanto para quem busca curtir esportes, como o surfe.\n");
            printf(" --> Este hotel design aceita animais de estimação e oferece serviço de mordomo, além de WiFi gratuito.\n");
            printf(" --> Com vista para o mar, as suítes possuem televisão com mais de cem canais, Wi-Fi, ar-condicionado split e frigobar, além de banheiro privativo.\n");
            printf(" --> Cafe da manha incluso.\n");
            printf(" --> Possui uma diaria de RS 351,00.\n\n");

            printf("===========================================\n");

            printf("Informe seu nome completo: ");
            setbuf(stdin, NULL);
            scanf("%[^\n]s", nome);

            printf("\nInforme o dia que ira fazer o check in: ");
            scanf("%d",&dia);

            printf("\nInforme o mes que ira fazer o check in: ");
            scanf("%d",&mes);

            printf("\nInforme o ano que ira fazer o check in: ");
            scanf("%d",&ano);

            printf("\nInforme o dia que ira fazer o check out: ");
            scanf("%d",&dia_out);

            printf("\nInforme o mes que ira fazer o check out: ");
            scanf("%d",&mes_out);

            printf("\nInforme o ano que ira fazer o check out: ");
            scanf("%d",&ano_out);

            printf("\nInforme a quantidade de pessoas que ficara no quarto com voce: ");
            scanf("%d",&pessoas);

            printf("\nDeseja confimar o agendamento deste hotel ? ");
            printf("\n(1) - SIM");
            printf("\n(2) - NAO");
            printf("\nSua opcao: ");
            scanf("%d",&confirmacao);

            switch (confirmacao)
            {
            case 1:
                printf("\n\n\nPARABENS %s !!!",nome);
                printf("\nO numero do quarto eh: %d",rand () % 100);
                printf("\nO seu agendamento para o dia %d do mes %d do ano de %d ate o dia %d do mes %d do ano %d no MARESIA SUITES BEIRA MAR foi confirmado\n\n\n",dia,mes,ano,dia_out,mes_out,ano_out);
                total_pagar=pessoas*351,00;
                printf("\nTotal a pagar sera de: %.2f",total_pagar);
                printf("\n OBS: O valor total é o numero pessoas vezes o valor da diaria");
            break;
            case 2:
                printf("\nAgendamento nao confirmado!!\n\n\n");
            break;
            default: printf("OPÇÃO INVÁLIDA!\n");
            }
        break;
        case 4:
            printf("Informacoes sobre o hotel escolhido: \n");
            printf(" --> É um dos destinos mais procurados do Brasil. Localizado no litoral sul de Pernambuco, próximo a destinos como praias de Serrambi, Maracaípe e Praia dos Carneiros.\n");
            printf(" --> O Hilton Barra Rio de Janeiro oferece piscina na cobertura com impressionante vista do lago.\n");
            printf(" --> Distante a aproximadamente 60km do Aeroporto Internacional dos Guararapes, permite aos hospedes se deslocarem também para Recife e Olinda.\n");
            printf(" --> Cafe da manha nao incluso.\n");
            printf(" --> Possui uma diaria de RS 288,00.\n\n");

            printf("===========================================\n");

            printf("\nInforme seu nome completo: ");
            setbuf(stdin, NULL);
            scanf("%[^\n]s", nome);

            printf("\nInforme o dia que ira fazer o check in: ");
            scanf("%d",&dia);

            printf("\nInforme o mes que ira fazer o check in: ");
            scanf("%d",&mes);

            printf("\nInforme o ano que ira fazer o check in: ");
            scanf("%d",&ano);

            printf("\nInforme o dia que ira fazer o check out: ");
            scanf("%d",&dia_out);

            printf("\nInforme o mes que ira fazer o check out: ");
            scanf("%d",&mes_out);

            printf("\nInforme o ano que ira fazer o check out: ");
            scanf("%d",&ano_out);

            printf("\nInforme a quantidade de pessoas que ficara no quarto com voce: ");
            scanf("%d",&pessoas);

            printf("\nDeseja confimar o agendamento deste hotel ? ");
            printf("\n(1) - SIM");
            printf("\n(2) - NAO");
            printf("\nSua opcao: ");
            scanf("%d",&confirmacao);

            switch (confirmacao)
            {
            case 1:
                printf("\n\n\nPARABENS %s !!!",nome);
                printf("\nO numero do quarto eh: %d",rand () % 100);
                printf("\nO seu agendamento para o dia %d do mes %d do ano de %d ate o dia %d do mes %d do ano %d no BEACH CLASS ECO LIFE foi confirmado\n\n\n",dia,mes,ano,dia_out,mes_out,ano_out);
                total_pagar=pessoas*288,00;
                printf("\nTotal a pagar sera de: %.2f",total_pagar);
                printf("\n OBS: O valor total é o numero pessoas vezes o valor da diaria");
            break;
            case 2:
                printf("\nAgendamento nao confirmado!!\n\n\n");
            break;
            default: printf("OPÇÃO INVÁLIDA!\n");
            }
        break;
        default: printf("OPÇÃO INVÁLIDA!\n");
        }
        break;
        case 3:
        printf("\n\nEm Gramado temos 4 hoteis disponiveis, que sao: \n\n");
        printf("(1) - SERRAZUL HOTEL - RS 608,00 p/ dia\n");
        printf("(2) - MODEVIE BOUTIQUE HOTEL - RS 621,00 p/ dia\n");
        printf("(3) - ENCANTOS DO SUL - RS 398,00 p/ dia\n");
        printf("(4) - VILLA BELA HOTEL CONCEITO - RS 904,00 p/ dia\n");

        printf("\n\nInforme qual hotel gostaria de ir: ");
        scanf("%d",&hotel);

        switch(hotel)
        {
        case 1:
            printf("Informacoes sobre o hotel escolhido: \n");
            printf(" --> O Serrazul Hotel está localizado a menos de 500 metros da Rua Coberta, ponto turístico de Gramado.\n");
            printf(" --> Com televisão a cabo, Wi-Fi, secador de cabelos, ar-condicionado, frigobar e ventilador de teto, as suítes acomodam até três pessoas.\n");
            printf(" --> Alguns apartamentos possuem varanda. Sauna, salão de jogos e piscina térmica estão à disposição dos hóspedes do Serrazul Hotel.\n");
            printf(" --> Cafe da manha incluso.\n");
            printf(" --> Possui uma diaria de RS 608,00.\n\n");

            printf("===========================================\n");

            printf("\nInforme seu nome completo: ");
            setbuf(stdin, NULL);
            scanf("%[^\n]s", nome);

            printf("\nInforme o dia que ira fazer o check in: ");
            scanf("%d",&dia);

            printf("\nInforme o mes que ira fazer o check in: ");
            scanf("%d",&mes);

            printf("\nInforme o ano que ira fazer o check in: ");
            scanf("%d",&ano);

            printf("\nInforme o dia que ira fazer o check out: ");
            scanf("%d",&dia_out);

            printf("\nInforme o mes que ira fazer o check out: ");
            scanf("%d",&mes_out);

            printf("\nInforme o ano que ira fazer o check out: ");
            scanf("%d",&ano_out);

            printf("\nInforme a quantidade de pessoas que ficara no quarto com voce: ");
            scanf("%d",&pessoas);

            printf("\nDeseja confimar o agendamento deste hotel ? ");
            printf("\n(1) - SIM");
            printf("\n(2) - NAO");
            printf("\nSua opcao: ");
            scanf("%d",&confirmacao);

            switch (confirmacao)
            {
            case 1:
                printf("\n\n\nPARABENS %s !!!",nome);
                printf("\nO numero do quarto eh: %d",rand () % 100);
                printf("\nO seu agendamento para o dia %d do mes %d do ano de %d ate o dia %d do mes %d do ano %d no SERRAZUL HOTEL foi confirmado\n\n\n",dia,mes,ano,dia_out,mes_out,ano_out);
                total_pagar=pessoas*608,00;
                printf("\nTotal a pagar sera de: %.2f",total_pagar);
                printf("\n OBS: O valor total é o numero pessoas vezes o valor da diaria");
            break;
            case 2:
                printf("\nAgendamento nao confirmado!!\n\n\n");
            break;
            default: printf("OPÇÃO INVÁLIDA!\n");
            }
        break;
        case 2:
            printf("Informacoes sobre o hotel escolhido: \n");
            printf(" --> A menos de cinco minutos de caminhada da Igreja Matriz, o Modevie Boutique Hotel oferece toda a comodidade de uma hospedagem cinco estrelas bem no centro de Gramado.\n");
            printf(" --> As acomodações são equipadas com ar-condicionado, calefação, banheiro com piso aquecido e TV a cabo.\n");
            printf(" --> As suítes superiores têm até 80 metros quadrados e apresentam colchões com massageadores, hidromassagem, lareira e sacada.\n");
            printf(" --> Cafe da manha incluso.\n");
            printf(" --> Possui uma diaria de RS 621,00.\n\n");

            printf("===========================================\n");

            printf("\nInforme seu nome completo: ");
            setbuf(stdin, NULL);
            scanf("%[^\n]s", nome);

            printf("\nInforme o dia que ira fazer o check in: ");
            scanf("%d",&dia);

            printf("\nInforme o mes que ira fazer o check in: ");
            scanf("%d",&mes);

            printf("\nInforme o ano que ira fazer o check in: ");
            scanf("%d",&ano);

            printf("\nInforme o dia que ira fazer o check out: ");
            scanf("%d",&dia_out);

            printf("\nInforme o mes que ira fazer o check out: ");
            scanf("%d",&mes_out);

            printf("\nInforme o ano que ira fazer o check out: ");
            scanf("%d",&ano_out);

            printf("\nInforme a quantidade de pessoas que ficara no quarto com voce: ");
            scanf("%d",&pessoas);

            printf("\nDeseja confimar o agendamento deste hotel ? ");
            printf("\n(1) - SIM");
            printf("\n(2) - NAO");
            printf("\nSua opcao: ");
            scanf("%d",&confirmacao);

            switch (confirmacao)
            {
            case 1:
                printf("\n\n\nPARABENS %s !!!",nome);
                printf("\nO numero do quarto eh: %d",rand () % 100);
                printf("\nO seu agendamento para o dia %d do mes %d do ano de %d ate o dia %d do mes %d do ano %d no MODEVIE BOUTIQUE HOTEL foi confirmado\n\n\n",dia,mes,ano,dia_out,mes_out,ano_out);
                total_pagar=pessoas*621,00;
                printf("\nTotal a pagar sera de: %.2f",total_pagar);
                printf("\n OBS: O valor total é o numero pessoas vezes o valor da diaria");
            break;
            case 2:
                printf("\nAgendamento nao confirmado!!\n\n\n");
            break;
            default: printf("OPÇÃO INVÁLIDA!\n");
            }
        break;
        case 3:
            printf("Informacoes sobre o hotel escolhido: \n");
            printf(" --> Localizado a cerca de quatro quilômetros do centro de Gramado, o Hotel Encantos do Sul funciona em uma construção inspirada na arquitetura da Bavária Seus 78 apartamentos são divididos em duas categorias.\n");
            printf(" --> Em comum, todas as unidades dispõem de TV LCD, frigobar, ar-condicionado, calefação, secador de cabelos e sinal de Wi-Fi.\n");
            printf(" --> No Hotel Encantos do Sul, o hóspede encontra recepção 24 horas e estacionamento gratuito. Os serviços de lavanderia e de passeios turísticos são cobrados à parte.\n");
            printf(" --> Cafe da manha incluso.\n");
            printf(" --> Possui uma diaria de RS 398,00.\n\n");

            printf("===========================================\n");

            printf("Informe seu nome completo: ");
            setbuf(stdin, NULL);
            scanf("%[^\n]s", nome);

            printf("\nInforme o dia que ira fazer o check in: ");
            scanf("%d",&dia);

            printf("\nInforme o mes que ira fazer o check in: ");
            scanf("%d",&mes);

            printf("\nInforme o ano que ira fazer o check in: ");
            scanf("%d",&ano);

            printf("\nInforme o dia que ira fazer o check out: ");
            scanf("%d",&dia_out);

            printf("\nInforme o mes que ira fazer o check out: ");
            scanf("%d",&mes_out);

            printf("\nInforme o ano que ira fazer o check out: ");
            scanf("%d",&ano_out);

            printf("\nInforme a quantidade de pessoas que ficara no quarto com voce: ");
            scanf("%d",&pessoas);

            printf("\nDeseja confimar o agendamento deste hotel ? ");
            printf("\n(1) - SIM");
            printf("\n(2) - NAO");
            printf("\nSua opcao: ");
            scanf("%d",&confirmacao);

            switch (confirmacao)
            {
            case 1:
                printf("\n\n\nPARABENS %s !!!",nome);
                printf("\nO numero do quarto eh: %d",rand () % 100);
                printf("\nO seu agendamento para o dia %d do mes %d do ano de %d ate o dia %d do mes %d do ano %d no ENCANTOS DO SUL foi confirmado\n\n\n",dia,mes,ano,dia_out,mes_out,ano_out);
                total_pagar=pessoas*398,00;
                printf("\nTotal a pagar sera de: %.2f",total_pagar);
                printf("\n OBS: O valor total é o numero pessoas vezes o valor da diaria");
            break;
            case 2:
                printf("\nAgendamento nao confirmado!!\n\n\n");
            break;
            default: printf("OPÇÃO INVÁLIDA!\n");
            }
        break;
        case 4:
            printf("Informacoes sobre o hotel escolhido: \n");
            printf(" --> O charmoso Villa Bella Hotel Conceito fica no alto do Vale do Quilombo, de onde é possível observar panoramas arrebatadores.\n");
            printf(" --> Wi-Fi, minibar, cofre, ar-condicionado e produtos de banho são itens padrão nos quartos.\n");
            printf(" --> Os modernos quartos e suítes têm decoração elegante.\n");
            printf(" --> Piscina coberta e aquecida, salão de jogos, sala de TV e espaço infantil convidam os hóspedes à interação; elevador panorâmico e estacionamento gratuito também estão entre as comodidades.\n");
            printf(" --> Cafe da manha incluso.\n");
            printf(" --> Possui uma diaria de RS 904,00.\n\n");

            printf("===========================================\n");

            printf("\nInforme seu nome completo: ");
            setbuf(stdin, NULL);
            scanf("%[^\n]s", nome);

            printf("\nInforme o dia que ira fazer o check in: ");
            scanf("%d",&dia);

            printf("\nInforme o mes que ira fazer o check in: ");
            scanf("%d",&mes);

            printf("\nInforme o ano que ira fazer o check in: ");
            scanf("%d",&ano);

            printf("\nInforme o dia que ira fazer o check out: ");
            scanf("%d",&dia_out);

            printf("\nInforme o mes que ira fazer o check out: ");
            scanf("%d",&mes_out);

            printf("\nInforme o ano que ira fazer o check out: ");
            scanf("%d",&ano_out);

            printf("\nInforme a quantidade de pessoas que ficara no quarto com voce: ");
            scanf("%d",&pessoas);

            printf("\nDeseja confimar o agendamento deste hotel ? ");
            printf("\n(1) - SIM");
            printf("\n(2) - NAO");
            printf("\nSua opcao: ");
            scanf("%d",&confirmacao);

            switch (confirmacao)
            {
            case 1:
                printf("\n\n\nPARABENS %s !!!",nome);
                printf("\nO numero do quarto eh: %d",rand () % 100);
                printf("\nO seu agendamento para o dia %d do mes %d do ano de %d ate o dia %d do mes %d do ano %d no VILLA BELA HOTEL CONCEITO foi confirmado\n\n\n",dia,mes,ano,dia_out,mes_out,ano_out);
                total_pagar=pessoas*904,00;
                printf("\nTotal a pagar sera de: %.2f",total_pagar);
                printf("\n OBS: O valor total é o numero pessoas vezes o valor da diaria");
            break;
            case 2:
                printf("\nAgendamento nao confirmado!!\n\n\n");
            break;
            default: printf("OPÇÃO INVÁLIDA!\n");
            }
        break;
        default: printf("OPÇÃO INVÁLIDA!\n");
        }
        break;
        case 4:
        printf("\n\nEm Foz do Iguaçu temos 4 hoteis disponiveis, que sao: \n\n");
        printf("(1) - BELMOND DAS CATARATAS - RS 1567,00 p/ dia\n");
        printf("(2) - TAROBÁ HOTEL - RS 151,00 p/ dia\n");
        printf("(3) - HOTEL COLONIAL IGUAÇU - RS 190,00 p/ dia\n");
        printf("(4) - RAFAIN PALACE - RS 357,00 p/ dia\n");

        printf("\n\nInforme qual hotel gostaria de ir: ");
        scanf("%d",&hotel);

        switch(hotel)
        {
        case 1:
            printf("Informacoes sobre o hotel escolhido: \n");
            printf(" --> Cercado por uma das belezas naturais mais exuberantes do Brasil, o Belmond Hotel das Cataratas é o único hotel localizado no interior do Parque Nacional do Iguaçu.\n");
            printf(" --> As acomodações são decoradas em tradicional estilo colonial português, e dispõem de um espaçoso banheiro privativo.\n");
            printf(" -->O Belmond Hotel das Cataratas oferece, ainda, passeios como trilhas guiadas pela floresta, safaris de jipe e sobrevoos de helicóptero.\n");
            printf(" --> Cafe da manha incluso.\n");
            printf(" --> Possui uma diaria de RS 1567,00.\n\n");

            printf("===========================================\n");

            printf("Informe seu nome completo: ");
            setbuf(stdin, NULL);
            scanf("%[^\n]s", nome);

            printf("\nInforme o dia que ira fazer o check in: ");
            scanf("%d",&dia);

            printf("\nInforme o mes que ira fazer o check in: ");
            scanf("%d",&mes);

            printf("\nInforme o ano que ira fazer o check in: ");
            scanf("%d",&ano);

            printf("\nInforme o dia que ira fazer o check out: ");
            scanf("%d",&dia_out);

            printf("\nInforme o mes que ira fazer o check out: ");
            scanf("%d",&mes_out);

            printf("\nInforme o ano que ira fazer o check out: ");
            scanf("%d",&ano_out);

            printf("\nInforme a quantidade de pessoas que ficara no quarto com voce: ");
            scanf("%d",&pessoas);

            printf("\nDeseja confimar o agendamento deste hotel ? ");
            printf("\n(1) - SIM");
            printf("\n(2) - NAO");
            printf("\nSua opcao: ");
            scanf("%d",&confirmacao);

            switch (confirmacao)
            {
            case 1:
                printf("\n\n\nPARABENS %s !!!",nome);
                printf("\nO numero do quarto eh: %d",rand () % 100);
                printf("\nO seu agendamento para o dia %d do mes %d do ano de %d ate o dia %d do mes %d do ano %d no BELMOND DAS CATARATAS foi confirmado\n\n\n",dia,mes,ano,dia_out,mes_out,ano_out);
                total_pagar=pessoas*1567,00;
                printf("\nTotal a pagar sera de: %.2f",total_pagar);
                printf("\n OBS: O valor total é o numero pessoas vezes o valor da diaria");
            break;
            case 2:
                printf("\nAgendamento nao confirmado!!\n\n\n");
            break;
            default: printf("OPÇÃO INVÁLIDA!\n");
            }
        break;
        case 2:
            printf("Informacoes sobre o hotel escolhido: \n");
            printf(" --> Localizado no centro da cidade, o Tarobá Hotel é uma opção de hospedagem com ar moderno e estrutura completa.\n");
            printf(" --> Os apartamentos incluem TV a cabo, cofre, frigobar e ar-condicionado.\n");
            printf(" --> Piscina aberta e aquecida, terraço ao ar livre, salão de jogos, parquinho infantil e academia são algumas das comodidades disponíveis no Tarobá Hotel.\n");
            printf(" --> Cafe da manha incluso.\n");
            printf(" --> Possui uma diaria de RS 151,00.\n\n");

            printf("===========================================\n");

            printf("\nInforme seu nome completo: ");
            setbuf(stdin, NULL);
            scanf("%[^\n]s", nome);

            printf("\nInforme o dia que ira fazer o check in: ");
            scanf("%d",&dia);

            printf("\nInforme o mes que ira fazer o check in: ");
            scanf("%d",&mes);

            printf("\nInforme o ano que ira fazer o check in: ");
            scanf("%d",&ano);

            printf("\nInforme o dia que ira fazer o check out: ");
            scanf("%d",&dia_out);

            printf("\nInforme o mes que ira fazer o check out: ");
            scanf("%d",&mes_out);

            printf("\nInforme o ano que ira fazer o check out: ");
            scanf("%d",&ano_out);

            printf("\nInforme a quantidade de pessoas que ficara no quarto com voce: ");
            scanf("%d",&pessoas);

            printf("\nDeseja confimar o agendamento deste hotel ? ");
            printf("\n(1) - SIM");
            printf("\n(2) - NAO");
            printf("\nSua opcao: ");
            scanf("%d",&confirmacao);

            switch (confirmacao)
            {
            case 1:
                printf("\n\n\nPARABENS %s !!!",nome);
                printf("\nO numero do quarto eh: %d",rand () % 100);
                printf("\nO seu agendamento para o dia %d do mes %d do ano de %d ate o dia %d do mes %d do ano %d no hotel TAROBÁ HOTEL foi confirmado\n\n\n",dia,mes,ano,dia_out,mes_out,ano_out);
                total_pagar=pessoas*151,00;
                printf("\nTotal a pagar sera de: %.2f",total_pagar);
                printf("\n OBS: O valor total é o numero pessoas vezes o valor da diaria");
            break;
            case 2:
                printf("\nAgendamento nao confirmado!!\n\n\n");
            break;
            default: printf("OPÇÃO INVÁLIDA!\n");
            }
        break;
        case 3:
            printf("Informacoes sobre o hotel escolhido: \n");
            printf(" --> Cercado por natureza, a menos de um quilômetro do principal centro de convenções da cidade, e com uma estrutura completa acochegante, o Hotel Colonial Iguaçu é opção de hospedagem para os mais variados perfis de viajantes.\n");
            printf(" --> As acomodações são equipadas com Wi-Fi, TV, minibar, secador de cabelos, ar-condicionado e mesa de trabalho.\n");
            printf(" --> Pensando no lazer dos hóspedes, o Hotel Colonial Iguaçu disponibiliza sala de jogos, academia, parque infantil e trilha ecológica.\n");
            printf(" --> Cafe da manha incluso.\n");
            printf(" --> Possui uma diaria de RS 190,00.\n\n");

            printf("===========================================\n");

            printf("\nInforme seu nome completo: ");
            setbuf(stdin, NULL);
            scanf("%[^\n]s", nome);

            printf("\nInforme o dia que ira fazer o check in: ");
            scanf("%d",&dia);

            printf("\nInforme o mes que ira fazer o check in: ");
            scanf("%d",&mes);

            printf("\nInforme o ano que ira fazer o check in: ");
            scanf("%d",&ano);

            printf("\nInforme o dia que ira fazer o check out: ");
            scanf("%d",&dia_out);

            printf("\nInforme o mes que ira fazer o check out: ");
            scanf("%d",&mes_out);

            printf("\nInforme o ano que ira fazer o check out: ");
            scanf("%d",&ano_out);

            printf("\nInforme a quantidade de pessoas que ficara no quarto com voce: ");
            scanf("%d",&pessoas);

            printf("\nDeseja confimar o agendamento deste hotel ? ");
            printf("\n(1) - SIM");
            printf("\n(2) - NAO");
            printf("\nSua opcao: ");
            scanf("%d",&confirmacao);

            switch (confirmacao)
            {
            case 1:
                printf("\n\n\nPARABENS %s !!!",nome);
                printf("\nO numero do quarto eh: %d",rand () % 100);
                printf("\nO seu agendamento para o dia %d do mes %d do ano de %d ate o dia %d do mes %d do ano %d no HOTEL COLONIAL IGUAÇU foi confirmado\n\n\n",dia,mes,ano,dia_out,mes_out,ano_out);
                total_pagar=pessoas*190,00;
                printf("\nTotal a pagar sera de: %.2f",total_pagar);
                printf("\n OBS: O valor total é o numero pessoas vezes o valor da diaria");
            break;
            case 2:
                printf("\nAgendamento nao confirmado!!\n\n\n");
            break;
            default: printf("OPÇÃO INVÁLIDA!\n");
            }
        break;
        case 4:
            printf("Informacoes sobre o hotel escolhido: \n");
            printf(" --> O Rafain Palace Hotel & Convention Center concilia uma boa experiência de hospedagem a uma grande estrutura para lazer e negócios em Foz do Iguaçu, todos os quartos são equipados com camas box Spring, ar-condicionado, minibar e TV a cabo LCD.\n");
            printf(" --> Os hóspedes dispõem de três piscinas, campos de futebol, quadras poliesportivas, academia, jacuzzi aquecida, trilhas e paredão artificial de escalada.\n");
            printf(" --> Além de dois bares que servem lanches e pestiscos, sendo um na área da piscina, há o restaurante Itamuri, que funciona com bufê e pedidos à la carte.\n");
            printf(" --> Cafe da manha incluso.\n");
            printf(" --> Possui uma diaria de RS 357,00.\n\n");

            printf("===========================================\n");

            printf("\nInforme seu nome completo: ");
            setbuf(stdin, NULL);
            scanf("%[^\n]s", nome);

            printf("\nInforme o dia que ira fazer o check in: ");
            scanf("%d",&dia);

            printf("\nInforme o mes que ira fazer o check in: ");
            scanf("%d",&mes);

            printf("\nInforme o ano que ira fazer o check in: ");
            scanf("%d",&ano);

            printf("\nInforme o dia que ira fazer o check out: ");
            scanf("%d",&dia_out);

            printf("\nInforme o mes que ira fazer o check out: ");
            scanf("%d",&mes_out);

            printf("\nInforme o ano que ira fazer o check out: ");
            scanf("%d",&ano_out);

            printf("\nInforme a quantidade de pessoas que ficara no quarto com voce: ");
            scanf("%d",&pessoas);

            printf("\nDeseja confimar o agendamento deste hotel ? ");
            printf("\n(1) - SIM");
            printf("\n(2) - NAO");
            printf("\nSua opcao: ");
            scanf("%d",&confirmacao);

            switch (confirmacao)
            {
            case 1:
                printf("\n\n\nPARABENS %s !!!",nome);
                printf("\nO numero do quarto eh: %d",rand () % 100);
                printf("\nO seu agendamento para o dia %d do mes %d do ano de %d ate o dia %d do mes %d do ano %d no HOTEL RAFAIN PALACE foi confirmado\n\n\n",dia,mes,ano,dia_out,mes_out,ano_out);
                total_pagar=pessoas*357,00;
                printf("\nTotal a pagar sera de: %.2f",total_pagar);
                printf("\n OBS: O valor total é o numero pessoas vezes o valor da diaria");
            break;
            case 2:
                printf("\nAgendamento nao confirmado!!\n\n\n");
            }
        break;
        default: printf("OPÇÃO INVÁLIDA!\n");
        }
    }
        printf("\n\n\n__________________________________________________________________________________\n");
        printf("\nDESEJA FAZER OUTRA RESERVA?");
        printf("\nDIGITE:\t 1:SIM\t 2:NÃO\nDIGITE: ");
        scanf("%i", &i);
    }while(i==1);

    printf("\n\nAVALIE NOSSO PROGRAMA DE 0 A 10: ");
    scanf("%d",&avaliacao);

    if (avaliacao >= 0 && avaliacao < 6)
    {
        printf("\nDÊ DICAS PARA MELHORARMOS: ");
        setbuf(stdin, NULL);
        scanf("%[^\n]s", dicas);
    }

    else
    {
        printf("\nOBRIGADO POR UTILIZAR NOSSO PROGRAMA!!!");
    }
    return 0;
}
