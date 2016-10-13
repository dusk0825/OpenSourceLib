cd ../
dir *.proto /s/a/b >_tools/a.txt
for /f %%i in (_tools/a.txt) do (cd _tools & protoc -I=../ --java_out=./java --proto_path=../ ../%%~ni.proto & cd ../)
cd _tools
del a.txt
pause