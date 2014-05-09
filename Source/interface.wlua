-- Interfacce com o Usuário --

require( "iuplua" )


function param_action(dialog, param_index)
  if (param_index == -1) then
   -- print('OK')
	--iup.ExitLoop()
  elseif (param_index == -2) then
   -- print("Map")
  elseif (param_index == -3) then
    --print("Cancel")
	--iup.ExitLoop()
  else
    local param = iup.GetParamParam(dialog, param_index)
    --print("PARAM"..param_index.." = "..param.value)
  end
  return 1
end

-- set initial values
iup.SetLanguage("PORTUGUESE")
local valorInicial = 0
local valorFinal = 0
local h = 0
local interacoes = 0
local funcao = 0
local respPreditor = 1
local opMetodo = 0
--local text = "\n x:%20.10%d\n y:%20.10%d\n:%20.10%d\n:%20.10%d\n"

ret,valorInicial, valorFinal, h, interacoes,respPreditor, opMetodo,funcao =
      iup.GetParam("EDO's", param_action,
				  "Variáveis %t\n"..
                  "Valor inicial: %i\n"..
                  "Valor final: %i\n"..
                  "Passo h: %i\n"..
				  "Interações n: %i\n"..
                  "Métodos %t\n"..
				  "%b[Preditor-Corretor,Preditor-Corretor]\n"..
				  "%o|Metodo de Euler|Rungger-Kutta 2|Rungger-Kutta 3|Rungger-Kutta 4|\n"..
				  "Função %t\n"..
				  "Escolha: %l|x²+1|-x²+1|x³+5x+1|\n",
				  valorInicial, valorFinal, h, interacoes,respPreditor, opMetodo,0)
if (not ret) then
  return
end

--
--iup.Message("IupGetParam",
--            "Boolean Value: "..pboolean.."\n"..
--            "Integer: "..pinteger.."\n"..
--            "Real 1: "..preal.."\n"..
----            "Integer: "..pinteger2.."\n"..
--            "Real 2: "..preal2.."\n"..
--            "Angle: "..pangle.."\n"..
 --           "String: "..pstring.."\n"..
--            "List Index: "..plist.."\n"..
--            "String: "..pstring2)
--
if (iup.MainLoopLevel()==0) then
  iup.MainLoop()
end
