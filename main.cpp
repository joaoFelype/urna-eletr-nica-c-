
    #include <iostream>
using namespace std;

int main()
{
    //dados de entrada do cpf
    int c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11;
    //dados de verificação do numero
     int soma;
     int res;
     int div1,div2;
     //dados de votação
     int votodegover;
     int gover1=0, gover2=0, gover3=0, govenulo=0, goverbranco=0;
     int votopresidente;
     int pres1=0, pres2=0, pres3=0, presnulo=0, presbranco=0;
     int cpf;
     int tvt,tvp;
     int total,totalp;
    do{
     do{
    cout<< "digite os numeros do seu cpf um de cada vez para serem validados corretamente" << endl;
    cin >> c1>>c2>> c3>> c4>>c5>>c6>>c7>>c8>>c9>>c10>>c11;
    soma=c1*10+c2*9+c3*8+c4*7+c5*6+c6*5+c7*4+c8*3+c9*2;
    res=soma%11;
   if (res<2){
    div1=0;
   }else {
       div1=11-res;
   }
    soma=c1*11+c2*10+c3*9+c4*8+c5*7+c6*6+c7*5+c8*4+c9*3+div1*2;
    res=soma%11;
    if (res<2){
        div2=0;
    }else {
    div2=11-res;
    }if (div1==c10 && div2==c11){
    cout << "cpf valido" << endl;
    cpf++;
    }else if (div1!=c10 && div2!=c11){
    cout << "cpf invalido parado ai malandro" << endl;
    }
    }while(div1!=c10&&div2!=c11);

    cout<<"Vote em um governador"<< endl;
    cout<<"1 - Batista"<< endl;
    cout<<"2 - Osvaldo"<< endl;
    cout<<"3 - Chaves"<< endl;
    cout<<"00 - Anular"<< endl;
    cout <<"4 - branco"<<endl;
    cin>>votodegover;
    if(votodegover == 1){gover1++;}
    if(votodegover == 2){gover2++;}
    if(votodegover == 3){gover3++;}
    if(votodegover == 00){govenulo++;}
    if(votodegover == 4) {goverbranco++;}

    cout<<"Vote em um Presidente"<< endl;
    cout<<"1 - Dio Brando"<< endl;
    cout<<"2 - Jonathan Joestar"<< endl;
    cout<<"3 - Erina Pendleton"<< endl;
    cout<<"00 - Anular"<< endl;
    cout <<"4 - branco"<<endl;
    cin>>votopresidente;
    if(votopresidente == 1){pres1++;}
    if(votopresidente == 2){pres2++;}
    if(votopresidente == 3){pres3++;}
    if(votopresidente == 00){presnulo++;}
    if(votopresidente == 4) {presbranco++;}


    cout<<"O total de eleitores"<<cpf<< endl;
    cout<<"Votos para governador"<<endl;
    cout<<"Batista:"<<gover1<<endl;
    cout<<"Osvaldo:"<<gover2<<endl;
    cout<<"Chaves:"<<gover3<<endl;
    cout<<"Nulos e brancos:"<<govenulo<<goverbranco<<endl;
    total=gover1+gover2+gover3+govenulo+goverbranco;
    tvt=gover1+gover2+gover3;
    cout<<"percentual do governador Batista:" << gover1*100/total<< endl;
    cout<< "percentual do governador Osvaldo:" <<gover2*100/total<<endl;
    cout<<"percentual do governador Chaves:"<<gover3*100/total<<endl;
    if (gover1>tvt/2){cout << "Batista foi eleito"<< endl;}
   else if (gover2>tvt/2) {cout<<"Osvaldo foi eleito"<<endl;}
    else if (gover3>tvt/2){cout<<"Chaves foi eleito"<<endl;}
    else {
        cout << "havera segundo turno" << endl;

    cout << "os candidatos que  irao para o segundo turno sao" << endl;
    if (gover1<=tvt/2){
        cout << "Batista ira para o segundo turno" <<endl;
    }if (gover2<=tvt/2){
    cout<< "Osvaldo ira para o segundo turno"<<endl;
    }if (gover3<=tvt/2){
    cout<<"Chaves ira para o segundo turno"<<endl;
    }}

    cout<<endl;

    cout<<"Votos para presidente"<<endl;
    cout<<"Dio Brando:"<<pres1<<endl;
    cout<<"Jonathan Joestar:"<<pres2<<endl;
    cout<<"Erina Pendleton:"<<pres3<<endl;
    cout<<"Nulos e brancos:"<<presnulo<<presbranco<<endl;
    totalp=pres1+pres2+pres3+presnulo+presbranco;
    tvp=pres1+pres2+pres3;
    cout <<"percentual do candidato Jonathan:" << pres2*100/totalp<<endl;
    cout <<"percentual da candidata Erina:" << pres3*100/totalp<<endl;
    cout <<"percentual do Dio Brando:" << pres1*100/totalp<<endl;

  if (pres1>tvp/2){cout << "Dio foi eleito"<< endl;}
   else if (pres2>tvp/2) {cout<<"Jonathan foi eleito"<<endl;}
    else if (pres3>tvp/2){cout<<"Erina foi eleito"<<endl;}
    else {
        cout << "havera segundo turno" << endl;

    cout << "os candidatos que  irao para o segundo turno sao" << endl;
    if (pres1<=tvp/2){
        cout << "Dio ira para o segundo turno" <<endl;
    }if (pres2<=tvp/2){
    cout<< "Jonathan ira para o segundo turno"<<endl;
    }if (pres3<=tvp/2){
    cout<<"Erina ira para o segundo turno"<<endl;
    }}}while(c1!=9&&c2!=9&&c3!=9&&c4!=9&&c5!=9&&c6!=9&&c7!=9&&c8!=9&&c9!=9&&c10!=9&&c11!=9);

    return 0;
}
