cd ../
dir *.proto /s/a/b >_tools/a.txt
for /f %%i in (_tools/a.txt) do (cd _tools & protoc -I=../ --cpp_out=./cpp --proto_path=../ ../%%~ni.proto & cd ../)
cd _tools
del a.txt
pause