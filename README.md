# Proyectos-y-Trabajos

# Proyecto N° 1 - Modelo B: Analizador de números

**Asignatura:** Lenguaje de Programación II (C++)[span_5](start_span)[span_5](end_span)  
**Sección:** A[span_6](start_span)[span_6](end_span)  
**Institución:** Instituto Universitario Politécnico «Santiago Mariño»[span_7](start_span)[span_7](end_span)  
**Integrantes:** 
- [Dave Mendoza][span_8](start_span)[span_8](end_span)[span_9](start_span)[span_9](end_span)
- 
---

## ¿Cómo usar el programa?
1. Abra el archivo `proyecto.cpp` en **Dev-C++** o cualquier compilador compatible con g++[span_12](start_span)[span_12](end_span).
2. Compile y ejecute el programa.
3. Seleccione una opción del menú interactivo (del 1 al 8) escribiendo el número correspondiente[span_13](start_span)[span_13](end_span)[span_14](start_span)[span_14](end_span).
4. Introduzca los datos solicitados dentro de los rangos válidos. Si introduce datos incorrectos o fuera de rango, el programa le notificará el error y le pedirá el valor de nuevo de forma segura[span_15](start_span)[span_15](end_span).
5. Al finalizar cada cálculo, el sistema le preguntará si desea realizar otra operación idéntica o regresar al menú principal.

---

## Tabla de Casos de Prueba

| N° | Opción / Funcionalidad | Entrada de Prueba | Resultado Esperado | Resultado Obtenido | Estatus |
|---|---|---|---|---|---|
| 1 | 1. Es primo | `1` | No es primo | No es primo | Exitoso[span_16](start_span)[span_16](end_span) |
| 2 | 1. Es primo | `97` | Es primo | Es primo | Exitoso[span_17](start_span)[span_17](end_span) |
| 3 | 2. Factorial | `0` | `1` | `1` | Exitoso[span_18](start_span)[span_18](end_span) |
| 4 | 2. Factorial | `21` | Error (Fuera de rango) | Error / Rechazado | Exitoso[span_19](start_span)[span_19](end_span) |
| 5 | 3. MCD y MCM | `12` y `18` | MCD: 6, MCM: 36 | MCD: 6, MCM: 36 | Exitoso[span_20](start_span)[span_20](end_span) |
| 6 | 4. Es perfecto | `28` | Es número perfecto | Es número perfecto | Exitoso[span_21](start_span)[span_21](end_span) |
| 7 | 5. Capicúa | `1221` | Es capicúa | Es capicúa | Exitoso[span_22](start_span)[span_22](end_span) |
| 8 | 5. Capicúa | `120` | Invertido: 21, No capicúa | Invertido: 21, No capicúa | Exitoso[span_23](start_span)[span_23](end_span) |
| 9 | 6. Binario | `5` | `101` | `101` | Exitoso[span_24](start_span)[span_24](end_span) |
| 10| 6. Binario | `1024` | Error (Fuera de rango) | Error / Rechazado | Exitoso[span_25](start_span)[span_25](end_span) |
| 11| Menú General | `abc` (Letras) | Mensaje de error y reintento | Mensaje de error y reintento | Exitoso[span_26](start_span)[span_26](end_span) |
