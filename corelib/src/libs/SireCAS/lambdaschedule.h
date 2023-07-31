/********************************************\
  *
  *  Sire - Molecular Simulation Framework
  *
  *  Copyright (C) 2023  Christopher Woods
  *
  *  This program is free software; you can redistribute it and/or modify
  *  it under the terms of the GNU General Public License as published by
  *  the Free Software Foundation; either version 3 of the License, or
  *  (at your option) any later version.
  *
  *  This program is distributed in the hope that it will be useful,
  *  but WITHOUT ANY WARRANTY; without even the implied warranty of
  *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  *  GNU General Public License for more details.
  *
  *  You should have received a copy of the GNU General Public License
  *  along with this program; if not, write to the Free Software
  *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
  *
  *  For full details of the license please see the COPYING file
  *  that should have come with this distribution.
  *
  *  You can contact the authors via the website
  *  at http://sire.openbiosim.org
  *
\*********************************************/

#ifndef SIRECAS_LAMBDASCHEDULE_H
#define SIRECAS_LAMBDASCHEDULE_H

#include "SireCAS/expression.h"
#include "SireCAS/values.h"

#include "SireBase/property.h"

SIRE_BEGIN_HEADER

namespace SireCAS
{
    class LambdaSchedule;
}

SIRECAS_EXPORT QDataStream &operator<<(QDataStream &, const SireCAS::LambdaSchedule &);
SIRECAS_EXPORT QDataStream &operator>>(QDataStream &, SireCAS::LambdaSchedule &);

namespace SireCAS
{
    /** This is a schedule that specifies how parameters are changed according
     *  to a global lambda value. The change can be broken up by sub lever,
     *  and by stage.
     */
    class SIRECAS_EXPORT LambdaSchedule : public SireBase::ConcreteProperty<LambdaSchedule, SireBase::Property>
    {

        friend QDataStream & ::operator<<(QDataStream &, const LambdaSchedule &);
        friend QDataStream & ::operator>>(QDataStream &, LambdaSchedule &);

    public:
        LambdaSchedule();
        LambdaSchedule(const LambdaSchedule &other);

        virtual ~LambdaSchedule();

        LambdaSchedule &operator=(const LambdaSchedule &other);

        bool operator==(const LambdaSchedule &other) const;
        bool operator!=(const LambdaSchedule &other) const;

        LambdaSchedule *clone() const;

        const char *what() const;
        static const char *typeName();

        QString toString() const;

        bool isNull() const;

        static SireCAS::Symbol lam();
        static SireCAS::Symbol initial();
        static SireCAS::Symbol final();

        void clear();

        void addLever(const QString &lever);
        void addLevers(const QStringList &levers);

        void removeLever(const QString &lever);
        void removeLevers(const QStringList &levers);

        int nLevers() const;

        QStringList getLevers() const;

        int nStages() const;

        QStringList getStages() const;

        QString getStage(double lambda_value) const;

        double getLambdaInStage(double lambda_value) const;

        void addStage(const QString &stage,
                      const SireCAS::Expression &equation);

        void setEquation(const QString &stage,
                         const QString &lever,
                         const SireCAS::Expression &equation);

        void setDefaultEquation(const QString &stage,
                                const SireCAS::Expression &equation);

        void removeEquation(const QString &stage,
                            const QString &lever);

        SireCAS::Expression getEquation(const QString &stage,
                                        const QString &lever) const;

        QHash<QString, QVector<double>> getLeverValues(const QVector<double> &lambda_values,
                                                       double initial = 0.0,
                                                       double final = 1.0) const;

        QHash<QString, QVector<double>> getLeverValues(int num_lambda = 101,
                                                       double initial = 0.0,
                                                       double final = 1.0) const;

        QStringList getLeverStages(const QVector<double> &lambda_values) const;

        QStringList getLeverStages(int num_lambda = 101) const;

        QVector<double> morph(const QString &lever,
                              const QVector<double> &initial,
                              const QVector<double> &final,
                              double lambda_value) const;

        QVector<int> morph(const QString &lever,
                           const QVector<int> &initial,
                           const QVector<int> &final,
                           double lambda_value) const;

    protected:
        int find_stage(const QString &stage) const;
        double clamp(double lambda_value) const;

        std::tuple<int, double> resolve_lambda(double lambda) const;

        /** The names of all of the levers provided by the forcefields */
        QStringList lever_names;

        /** The names of each stage of the lever */
        QStringList stage_names;

        /** The default equations used for each stage */
        QVector<SireCAS::Expression> default_equations;

        /** Any over-ridden equations for a particular lever in a
            particular stage */
        QVector<QHash<QString, SireCAS::Expression>> stage_equations;

        /** The symbol used to represent the lambda value */
        static SireCAS::Symbol lambda_symbol;

        /** The symbol used to represent the initial value */
        static SireCAS::Symbol initial_symbol;

        /** The symbol used to represent the final value */
        static SireCAS::Symbol final_symbol;
    };

}

Q_DECLARE_METATYPE(SireCAS::LambdaSchedule)

SIRE_EXPOSE_CLASS(SireCAS::LambdaSchedule)

SIRE_END_HEADER

#endif